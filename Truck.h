#pragma once
#include "Vehicle.h"
class Truck:virtual public Vehicle
{
protected:
	float MaxWeight;
	float MaxVolume;
public:
	Truck();

	Truck(string, string, float, float, float, float, float);

	float GetMaxWeight();
	void SetMaxWeight(float);

	float GetMaxVolume();
	void SetMaxVolume(float);
};

