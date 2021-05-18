#pragma once
#include "Vehicle.h"
class Car:virtual public Vehicle
{
protected:
	int MaxPassengers;
public:
	Car();

	Car(string, string, float, float, float, int);

	int GetMaxPassengers();
	void SetMaxPassengers(int);


	friend istream& operator>> (istream&, Car&);
	friend ostream& operator<< (ostream&, Car&);
};


