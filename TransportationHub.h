#pragma once
#include "Ride.h"
#include "Vehicle.h"
#include <vector>
class TransportationHub
{
private:
	vector<Ride*> Rides;
	vector<Ride*> CompletedRides;
	vector<Vehicle*> Vehicles;
	vector<Vehicle*> VehiclesOnRide;

public:
	TransportationHub();
	TransportationHub(vector<Ride*>, vector<Ride*>, vector<Vehicle*>, vector<Vehicle*>);

	vector<Ride*> GetRides();
	void SetRides(vector<Ride*>);

	vector<Ride*> GetCompletedRides();
	void SetCompletedRides(vector<Ride*>);

	vector<Vehicle*> GetVehicles();
	void SetVehicles(vector<Vehicle*>);

	vector<Vehicle*> GetVehiclesOnRide();
	void SetVehiclesOnRide(vector<Vehicle*>);

	void SortVehicles();

	void SortRides();
};

