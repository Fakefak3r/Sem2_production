#include "Collider.h"
#include "VMath.h"
#include "Ball.h"
#include "Body.h"


bool Collider::Collision(const Body& model1, const Body& model2)
{

	float distanceBetweenPoints = VMath::distance(model1.pos, model2.pos);
	if (distanceBetweenPoints < (model1.radius + model2.radius))
	{
		return true;
	}
	return false;
}

void Collider::CollideResponse(Body& model1, Body& model2)
{
	float coefficientofRestitution = 1.0f;
	Vec3 lineofAction = model1.pos - model2.pos;
	lineofAction = VMath::normalize(lineofAction);
	float V1p = VMath::dot(model1.vel, lineofAction);
	float V2p = VMath::dot(model2.vel, lineofAction);

	float newV1p = (model1.mass - coefficientofRestitution * model2.mass) * V1p / (model1.mass + model2.mass);
	float newV2p = (model2.mass - coefficientofRestitution * model1.mass) * V2p / (model1.mass + model2.mass);

	model1.vel += (newV1p - V1p) * lineofAction;
	model2.vel += (newV2p - V2p) * lineofAction;

}

