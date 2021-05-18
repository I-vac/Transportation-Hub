#pragma once
#include <ctime>
#include "Vehicle.h"


using namespace std;

class Ride
{
protected:
	Vehicle* AssociatedVehicle;
	int AmountPersons;
	float CargoVolume;
	float CargoWeight;
	float StartingPrice;
	float Kilometres;
	long long StartingTime;
	long long EndTime;

public:
	Ride();

	Ride(Vehicle*, int, float, float, float, float, long long, long long);

	float CalculatePriceOfRide();

	Vehicle* GetAssociatedVehicle();
	void SetAssociatedVehicle(Vehicle*);

	int GetAmountPersons();
	void SetAmountPersons(int);

	float GetCargoVolume();
	void SetCargoVolume(float);

	float GetCargoWeight();
	void SetCargoWeight(float);

	float GetStartingPrice();
	void SetStartingPrice(float);

	float GetKilometres();
	void SetKilometres(float);

	long long GetStartingTime();
	void SetStartingTime(long long);

	long long GetEndTime();
	void SetEndTime(long long);

	void SaveInFile();

	static vector < Ride*> ReadFromFile();

	string PrintRide();
};

