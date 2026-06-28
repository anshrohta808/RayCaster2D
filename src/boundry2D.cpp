#include "boundry.hpp"
#include <raylib.h>
#include <vector>
void boundry::draw()
{
    DrawLine(this->a.x, this->a.y, this->b.x, this->b.y, WHITE);
}
