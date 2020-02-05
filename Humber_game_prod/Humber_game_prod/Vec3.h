#ifndef VEC3_H
#define VEC3_H

class Vec3
{
public:
	float x;
	float y;
	float z;

	Vec3(float x_, float y_, float z_);
	Vec3(); //Sets x, y, z to 0 if left empty
};

#endif