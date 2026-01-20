#pragma once
#include "vec3.h"

using color = vec3;

color Get_Color(const color& pixel_color);
void write_color(std::ostream& out, const color& pixel_color);