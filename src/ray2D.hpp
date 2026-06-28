#pragma once
#include <raylib.h>
#include "boundry.hpp"
#include <vector>

class ray
{
public:
    Vector2 pos, dir;

    ray() {}

    void drawRay();
    void cast(boundry b);
    void NormalizeRay();
    void castAll(std::vector<boundry> b);
};
