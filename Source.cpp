#include <iostream>
#include <ctime>
#include <Windows.h>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include "Van.h"
#include "Ride.h"
#include "TransportationHub.h"

using namespace std;

int main()
{
	/*Vehicle* v1 = new Vehicle ("Mercedes Transporter 2015","P 6432 KM", 4.0, 5.14, 150);
	cout <<"Consumed fuel by the vehicle is: " <<v1->CalculateConsumedFuel() << endl;
	
	Car* c1 = new Car("Lexus RX 450h 2010", "B 4103 BA", 6.2, 12.34, 1500.00, 4);
	cout <<"Maximum number of passengers for the car is: " << c1->GetMaxPassengers() << endl;

	Truck* t1 = new Truck("Chevrolet Montana 2011", "CA 7845 XC", 6.2, 12.34, 1500.00, 900000, 500);
	cout <<"Max weight the truck can transport is: " << t1->GetMaxWeight() << endl;

	Van* van1 = new Van("Toyota Granvia Premium 2019", "TX 2503 BX", 6.2, 12.34, 1500.00, 4, 900000, 500);
	cout <<"Max volume of the Van is: " <<van1->GetMaxVolume() <<endl;

	Ride* r1 = new Ride(v1, 3, NULL, NULL, 5.00, 15.23, 1621106752177, 1621106752992);
	cout <<"The price for the ride is: " << r1->CalculatePriceOfRide() <<" euro" << endl;

	TransportationHub* trans1 = new TransportationHub();
	vector<Vehicle*> vec;
	vec.push_back(v1);
	vec.push_back(t1);
	vec.push_back(c1);
	vec.push_back(van1);
	trans1->SetVehicles(vec);
	trans1->SortVehicles();

	v1->SaveInFile();
	
	c1->SaveInFile();
	
	t1->SaveInFile();
	
	r1->SaveInFile();

	*/
	MSG msg;
	//if you add WS_CHILD flag,CreateWindow will fail because there is no parent window.
	HWND hWnd = CreateWindow(TEXT("button"), TEXT("Easy"), WS_VISIBLE | WS_POPUP,
		500, 500, 80, 25, NULL, NULL, NULL, NULL);

	ShowWindow(hWnd, SW_SHOW);
	UpdateWindow(hWnd);

	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}


	Vehicle* v1 = new Vehicle();
	vector<Vehicle*> FromFile = v1->ReadFromFile();
	for (Vehicle* vehicle : FromFile) {
		vehicle->PrintVehicle();
	}

	return 0;

}
