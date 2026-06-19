#include <raylib.h>
#include "map.hpp"
#include "player.hpp"
#include <math.h>

int FPS = 60;
Color background = BLACK;
const int winWidth = 800, winHeight = 600;
int main()
{
    // MAP AND PLAYER OBJECT
    map MAP;
    player P;
    P.dir = {1, 0};
    P.pos = {2.5, 2.5};
    P.plane = {0, 0.66};

    // Setting the game FPS

    // Game Window Initialization
    InitWindow(winWidth, winHeight, "RAYCASTER");
    SetTargetFPS(FPS);
    while (!WindowShouldClose())
    {
        // EVENT HANDALING

        // UPDATING GAME STATE
        for (int x = 0; x < winWidth; x++)
        {
            float cameraX = 2.0f * x / winWidth - 1.0f;
            float rayDirX = P.dir.x + P.plane.x * cameraX;
            float rayDirY = P.dir.y + P.plane.y * cameraX;

            // DDA setup
            int mapX = (int)P.pos.x;
            int mapY = (int)P.pos.y;
            float deltaDistX = abs(1 / rayDirX);
            float deltaDistY = abs(1 / rayDirY);
        }

        // DRAWING GAME
        BeginDrawing();
        ClearBackground(background);
        EndDrawing();
    }

    return 0;
}