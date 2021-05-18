#pragma once
#include "Car.h"
#include "Truck.h"

class Van:public Car,public Truck
{
public:
	Van();
	Van(string, string, float, float, float, int, float, float);
};

