#include <iostream>
#include<fstream>
#include <sstream>
#include "Car.h"
#include "Vehicle.h"


Car::Car(): Vehicle() {
	this->MaxPassengers=0;
};
//call Vehicles constructor with arguments from Car
Car::Car(string MakeAndModel, string LicensePlate, float GasUsage, float PricePerKm, float TotalKm, int MaxPassengers) :Vehicle(MakeAndModel, LicensePlate, GasUsage, PricePerKm, TotalKm) {
	this->MaxPassengers = MaxPassengers;
};

int Car::GetMaxPassengers() {
	return this->MaxPassengers;
};

void Car::SetMaxPassengers(int MaxPassengers) {
	this->MaxPassengers = MaxPassengers;
};

istream& operator >>(istream& stream, Car& c) {
	return stream >> c.MakeAndModel >> c.LicensePlate >> c.GasUsage >> c.PricePerKm >> c.TotalKm;
};


ostream& operator <<(ostream& stream, Car& c) {
	return stream << c.MakeAndModel << " " << c.LicensePlate << " " << c.GasUsage << " " << c.PricePerKm << " " << c.TotalKm << endl;
};