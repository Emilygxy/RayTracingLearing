#pragma once
#include "Hittable.h"

class Sphere : public Hittable
{
public:
	Sphere(const point3& center, float radius) : center(center), radius(std::fmax(0.0f, radius)) {}
	bool hit(const ray& r, float ray_tmin, float ray_tmax, hit_record& rec) const override;

private:
	point3 center;
	float radius;
};



