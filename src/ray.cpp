#include "ray.hpp"
#include "boundry.hpp"

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
