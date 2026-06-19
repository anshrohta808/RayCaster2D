#include <raylib.h>
#include "map.hpp"
#include "player.hpp"

int FPS = 60;
Color background = BLACK;
const int winWidth = 800, winHeight = 600;
int main()
{
    // Setting the game FPS
    SetTargetFPS(FPS);
    // Game Window Initialization
    InitWindow(winWidth, winHeight, "RAYCASTER");
    while (!WindowShouldClose())
    {
        // EVENT HANDALING

        // UPDATING GAME STATE

        // DRAWING GAME
        BeginDrawing();
        ClearBackground(background);
        EndDrawing();
    }

    return 0;
}