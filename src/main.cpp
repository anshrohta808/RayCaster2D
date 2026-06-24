#include <raylib.h>
#include <math.h>
#include "boundry.hpp"

const int FPS = 60;
Color background = BLACK;
const int winWidth = 800, winHeight = 600;
int main()
{
    boundry b(700, 100, 700, 500);

    // Game Window Initialization
    InitWindow(winWidth, winHeight, "RAYCASTER");
    // Setting the game FPS
    SetTargetFPS(FPS);
    // GameLoop
    while (!WindowShouldClose())
    {
        // EVENT HANDALING

        // UPDATING GAME STATE

        // DRAWING GAME
        BeginDrawing();
        b.draw();
        ClearBackground(background);
        EndDrawing();
    }

    return 0;
}