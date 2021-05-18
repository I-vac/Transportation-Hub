#pragma once
#include <string>
#include <vector>

using namespace std;

class Vehicle
{
protected:
	string MakeAndModel;
	string LicensePlate;
	float GasUsage;
	float PricePerKm;
	float TotalKm;

public:
	Vehicle();
	Vehicle(string, string, float, float, float);

	string GetMakeAndModel();
	void SetMakeAndModel(string);

	string GetLicensePlate();
	void SetLicensePlate(string);

	float GetGasUsage();
	void SetGasUsage(float);

	float GetPricePerKm();
	void SetPricePerKm(float);


	float GetTotalKm();
	void SetTotalKm(float);


	void SaveInFile();

	static vector < Vehicle*> ReadFromFile();

	float CalculateConsumedFuel();
	//float PricePerKm();

	string PrintVehicle();
};


