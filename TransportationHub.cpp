#pragma once
#include "TransportationHub.h"
#include "Ride.h"
#include "Vehicle.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

TransportationHub::TransportationHub() {
	
};

TransportationHub::TransportationHub(vector<Ride*> Rides, vector<Ride*> CompletedRides, vector<Vehicle*> Vehicles, vector<Vehicle*> VehiclesOnRide) {
	this->Rides = Rides;
	this->CompletedRides = CompletedRides;
	this->Vehicles = Vehicles;
	this->VehiclesOnRide = VehiclesOnRide;
};

vector<Ride*> TransportationHub::GetRides() {
	return this->Rides;
};

void TransportationHub::SetRides(vector<Ride*> Rides) {
	this->Rides = Rides;
};

vector<Ride*> TransportationHub::GetCompletedRides() {
	return this->CompletedRides;
};

void TransportationHub::SetCompletedRides(vector<Ride*> CompletedRides) {
	this->CompletedRides = CompletedRides;
};

vector<Vehicle*> TransportationHub::GetVehicles() {
	return this->Vehicles;
};

void TransportationHub::SetVehicles(vector<Vehicle*> Vehicles) {
	this->Vehicles = Vehicles;
};

vector<Vehicle*> TransportationHub::GetVehiclesOnRide() {
	return this->VehiclesOnRide;
};

void TransportationHub::SetVehiclesOnRide(vector<Vehicle*>VehiclesOnRide) {
	this->VehiclesOnRide = VehiclesOnRide;
};

void TransportationHub::SortVehicles() {
	for (int i = 0; i < Vehicles.size(); i++)
	{
		cout << Vehicles[i]->GetLicensePlate() << endl;
	}
	sort(this->Vehicles.begin(), this->Vehicles.end());
	for (int i = 0; i < Vehicles.size(); i++)
	{
		cout << Vehicles[i]->GetLicensePlate() << endl;
	}
};

void TransportationHub::SortRides() {
	for (int i = 0; i < Rides.size(); i++)
	{
		cout << Rides[i]->GetStartingTime() << endl;
	}
	sort(this->Rides.begin(), this->Rides.end());
	for (int i = 0; i < Rides.size(); i++)
	{
		cout << Rides[i]->GetStartingTime() << endl;
	}
};
