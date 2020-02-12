#ifndef COLLIDER_H
#define COLLIDER_H


#include "Body.h"

class Collider
{
public:

	static bool Collision(const Body& model1, const Body& model2);

	static void CollideResponse(Body& model1, Body& model2);

};

#endif