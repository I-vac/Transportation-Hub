#include "Van.h"
#include "Car.h"
#include "Truck.h"

Van::Van(): Truck() {
	this->MaxPassengers = 0;
};

Van::Van(string MakeAndModel, string LicensePlate, float GasUsage, float PricePerKm, float TotalKm, int MaxPassengers, float MaxWeight, float MaxVolume):Truck( MakeAndModel, LicensePlate, GasUsage, PricePerKm, TotalKm, MaxWeight, MaxVolume) {
	this->MaxPassengers = MaxPassengers;
};