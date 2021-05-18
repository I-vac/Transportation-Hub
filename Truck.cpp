#include "Truck.h"
#include "Vehicle.h"

Truck::Truck():Vehicle() {
	this->MaxWeight = 0;
	this->MaxVolume = 0;
};
//call Vehicles constructor with arguments from Truck
Truck::Truck(string MakeAndModel, string LicensePlate, float GasUsage, float PricePerKm, float TotalKm, float MaxWeight, float MaxVolume) :Vehicle(MakeAndModel, LicensePlate, GasUsage, PricePerKm, TotalKm) {
	this->MaxWeight=MaxWeight;
	this->MaxVolume = MaxVolume;
};

float Truck::GetMaxWeight() {
	return this->MaxWeight;
};

void Truck::SetMaxWeight(float MaxWeight) {
	this->MaxWeight = MaxWeight;
};

float Truck::GetMaxVolume() {
	return this->MaxVolume;
};

void Truck::SetMaxVolume(float MaxVolume) {
	this->MaxVolume = MaxVolume;
};