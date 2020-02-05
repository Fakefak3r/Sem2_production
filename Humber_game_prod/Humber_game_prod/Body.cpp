#include "Body.h"

Body::Body()
{
	mass = 200.0f;
}

void Body::Update(float deltaTime)
{
	totalTime += deltaTime;

	position.x += velocity.x * deltaTime + 0.5 * acceleration.x * deltaTime * deltaTime;
	position.y += velocity.y * deltaTime + 0.5 * acceleration.y * deltaTime * deltaTime;
	position.z += velocity.z * deltaTime + 0.5 * acceleration.z * deltaTime * deltaTime;


	velocity.x += acceleration.x * deltaTime;


}

void Body::ApplyForce(Vec3 force)
{
	acceleration.x = force.x / mass;
	acceleration.y = force.y / mass;
	acceleration.z = force.z / mass;
}
