#include <iostream>
#include <fstream>
#include "Vec3.h"
#include "Body.h"

int main()
{
	Vec3 vector;
	Body JetSki;



	const float deltaTime = 0.5f; //seconds


	Vec3 force(500.0f, 0.0f, 0.0f);


	for (float totalTime = 0.0f; totalTime < 15.1; totalTime += deltaTime) {

		if (totalTime >= 5.5f && totalTime < 10.0f)
			force.x = 0;

		else if (totalTime >= 10.0f)
			force.x = -625.0f;

		JetSki.ApplyForce(force);

		JetSki.Update(deltaTime);
	}

	return 0;
}