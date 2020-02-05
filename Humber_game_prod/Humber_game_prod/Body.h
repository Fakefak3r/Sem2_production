#ifndef BODY_H
#define BODY_H

#include "Vec3.h"

class Body
{
public:
	float mass;
	Vec3 position;
	Vec3 velocity;
	Vec3 acceleration;

	Body(); //Sets mass to 1 and all vectors to [0, 0, 0] if left empty


	// Updates position and velocity using equations of motion.
	//Remember that deltaTime is the change in time since last frame, NOT total time!
	void Update(float deltaTime);

	// Updates acceleration using the equation a = F/m
	void ApplyForce(Vec3 force);

	float totalTime;
};

#endif