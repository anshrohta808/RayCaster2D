#pragma once
#include <raylib.h>
class boundry
{
public:
    Vector2 a{};
    Vector2 b{};
    boundry(float x1, float y1, float x2, float y2)
        : a{x1, y1}, b{x2, y2} {}
    void draw();
};
