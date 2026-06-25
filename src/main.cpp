#include <raylib.h>
#include <raymath.h>
#include <math.h>
#include "boundry.hpp"
#include "ray.hpp"
const int FPS = 60;
Color background = BLACK;
const int winWidth = 800, winHeight = 600;
int main()
{
    boundry b(700, 100, 700, 500);
    ray r(200, 300);

    // Game Window Initialization
    InitWindow(winWidth, winHeight, "RAYCASTER");
    // Setting the game FPS
    SetTargetFPS(FPS);
    // GameLoop
    while (!WindowShouldClose())
    {
        // EVENT HANDALING
        Vector2 mousePos = GetMousePosition();
        Vector2 rayDir = mousePos - r.pos;
        r.dir = Vector2Normalize(rayDir);

        // UPDATING GAME STATE

        // DRAWING GAME
        BeginDrawing();
        ClearBackground(background);
        b.draw();
        r.drawRay();
        r.cast(b);
        EndDrawing();
    }

    return 0;
}