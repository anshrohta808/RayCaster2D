#pragma once
#include <raylib.h>

class ray
{
public:
    Vector2 pos, dir;
    ray(float x, float y) : pos{x, y}, dir{1, 0} {}

    void drawRay();
};
