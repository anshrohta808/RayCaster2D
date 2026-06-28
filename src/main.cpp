#include <raylib.h>
#include <raymath.h>
#include <math.h>
#include "boundry2D.hpp"
#include "ray2D.hpp"
#include <vector>
const int FPS = 60;
Color background = BLACK;
const int winWidth = 800, winHeight = 600;
int main()
{
    std::vector<boundry> BOUNDRY = {
        // outer walls
        boundry(50, 50, 750, 50),
        boundry(750, 50, 750, 550),
        boundry(750, 550, 50, 550),
        boundry(50, 550, 50, 50),

        // horizontal maze walls
        boundry(50, 150, 400, 150),
        boundry(500, 150, 750, 150),
        boundry(150, 250, 600, 250),
        boundry(50, 350, 300, 350),
        boundry(400, 350, 750, 350),
        boundry(200, 450, 550, 450),

        // vertical maze walls
        boundry(500, 250, 500, 350),
        boundry(300, 350, 300, 450),
        boundry(600, 350, 600, 450),
        boundry(400, 450, 400, 550),
    };
    ray RAY;

    // Game Window Initialization
    InitWindow(winWidth, winHeight, "RAYCASTER");
    // Setting the game FPS
    SetTargetFPS(FPS);
    // GameLoop
    while (!WindowShouldClose())
    {
        // EVENT HANDALING
        Vector2 mousePos = GetMousePosition();
        RAY.pos = mousePos;
        RAY.NormalizeRay();

        // UPDATING GAME STATE

        // DRAWING GAME
        BeginDrawing();
        ClearBackground(background);
        for (auto &wall : BOUNDRY)
            wall.draw();
        RAY.castAll(BOUNDRY);
        EndDrawing();
    }

    return 0;
}