#pragma once
#include "Ray.h"

struct hit_record
{
public:
    point3 p;
    vec3 normal;
    float t;

};

class Hittable
{
public:
	Hittable();
    ~Hittable() = default;

    virtual bool hit(const ray& r, float ray_tmin, float ray_tmax, hit_record& rec) const = 0;
private:

};




