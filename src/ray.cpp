#include "ray.hpp"

void ray::drawRay()
{
    DrawLine(pos.x, pos.y, pos.x + dir.x * 10, pos.y + dir.y * 10, WHITE);
}