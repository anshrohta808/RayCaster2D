#include "ray.hpp"
#include "boundry.hpp"
#include <raymath.h>
#include <vector>
#include <limits>
#include <math.h>

void ray::drawRay()
{
    DrawLine(pos.x, pos.y, pos.x + dir.x * 600, pos.y + dir.y * 600, WHITE);
}

void ray::cast(boundry b)
{
    Vector2 hitPoint;
    bool hit = CheckCollisionLines(pos, Vector2{pos.x + dir.x * 600, pos.y + dir.y * 600}, b.a, b.b, &hitPoint);
    if (hit)
    {
        DrawCircleV(hitPoint, 12.0, RED);
    }
}

void ray::NormalizeRay()
{
    Vector2 mousePos = GetMousePosition();
    Vector2 rayDir = mousePos - pos;
    dir = Vector2Normalize(rayDir);
}

void ray::castAll(std::vector<boundry> b)
{
    for (int a = 0; a < 360; a++)
    {
        dir = {(float)cos(a), (float)sin(a)}; // cos , sin are in double so type conversion into float for vector2
        Vector2 closestDist;
        float minDist = INT_MAX;
        float dist;
        for (int wall = 0; wall < (int)b.size(); wall++)
        {

            Vector2 hitPoint;
            bool hit = CheckCollisionLines(pos, Vector2{pos.x + dir.x * 600, pos.y + dir.y * 600}, b[wall].a, b[wall].b, &hitPoint);
            if (hit)
            {
                dist = Vector2Distance(hitPoint, pos);
                if (dist < minDist)
                {
                    minDist = dist;
                    closestDist = hitPoint;
                }
            }
        }
        if (minDist == INT_MAX)
            drawRay();
        else
        {
            DrawLineV(pos, closestDist, WHITE);
        }
    }
}
