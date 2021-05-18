#include <fstream>
#include <iostream>
#include "Ride.h"

Ride::Ride(){
	this->AssociatedVehicle = new Vehicle();
	this->AmountPersons = 0;
	this->CargoVolume = 0;
	this->CargoWeight = 0;
	this->StartingPrice = 0;
	this->Kilometres = 0;
	this->StartingTime = 0;
	this->EndTime = 0;
};

Ride::Ride(Vehicle* AssociatedVehicle, int AmountPersons, float CargoVolume, float CargoWeight, float StartingPrice, float Kilometres, long long StartingTime, long long EndTime) {
	this->AssociatedVehicle = AssociatedVehicle;
	this->AmountPersons = AmountPersons;
	this->CargoVolume = CargoVolume;
	this->CargoWeight = CargoWeight;
	this->StartingPrice = StartingPrice;
	this->Kilometres = Kilometres;
	this->StartingTime = StartingTime;
	this->EndTime = EndTime;
};

float Ride::CalculatePriceOfRide() {
	return ((AssociatedVehicle->GetPricePerKm() * Kilometres) + StartingPrice);
};

Vehicle* Ride::GetAssociatedVehicle() {
	return this->AssociatedVehicle;
};

void Ride::SetAssociatedVehicle(Vehicle* AssociatedVehicle) {
	this->AssociatedVehicle = AssociatedVehicle;
};

int Ride::GetAmountPersons() {
	return this->AmountPersons;
};

void Ride::SetAmountPersons(int AmountPersons) {
	this->AmountPersons = AmountPersons;
};

float Ride::GetCargoVolume() {
	return this->CargoVolume;
};

void Ride::SetCargoVolume(float CargoVolume) {
	this->CargoVolume = CargoVolume;
};

float Ride::GetCargoWeight() {
	return this->CargoWeight;
};

void Ride::SetCargoWeight(float CargoWeight) {
	this->CargoWeight=CargoWeight;
};

float Ride::GetStartingPrice() {
	return this->StartingPrice;
};

void Ride::SetStartingPrice(float StartingPrice) {
	this->StartingPrice = StartingPrice;
};

float Ride::GetKilometres() {
	return this->Kilometres;
};

void Ride::SetKilometres(float Kilometres) {
	this->Kilometres = Kilometres;
};

long long Ride::GetStartingTime() {
	return this->StartingTime;
};

void Ride::SetStartingTime(long long StartingTime) {
	this->StartingTime = StartingTime;
};

long long Ride::GetEndTime() {
	return this->EndTime;
};

void Ride::SetEndTime(long long EndTime) {
this->EndTime=EndTime;
};

vector <Ride*> Ride::ReadFromFile() {
	ifstream file;
	vector<Ride*> Rides;
	file.open("my_file1.txt");
	string line;
	while (file.good()) {
		getline(file, line);
		if (line.size() == 0)
			return Rides;
		string delimiter = "|";

		size_t pos = 0;
		vector<string> CurrentLine;
		string token;
		while ((pos = line.find(delimiter)) != string::npos) {
			token = line.substr(0, pos);
			line.erase(0, pos + delimiter.length());
			CurrentLine.push_back(token);
		}
		string MakeAndModel = CurrentLine[0];
		string LicensePlate = CurrentLine[1];
		float GasUsage = stof(CurrentLine[2]);
		float PricePerKm = stof(CurrentLine[3]);
		float TotalKm = stof(CurrentLine[4]);
		Vehicle* AssociatedVehicle = new Vehicle(MakeAndModel, LicensePlate, GasUsage, PricePerKm, TotalKm);

		int AmountPersons = stoi(CurrentLine[5]);
		float CargoVolume = stof(CurrentLine[6]);
		float CargoWeight = stof(CurrentLine[7]);
		float StartingPrice = stof(CurrentLine[8]);
		float Kilometres = stof(CurrentLine[9]);
		long long StartingTime = stof(CurrentLine[10]);
		long long EndTime = stof(CurrentLine[11]);
		Ride* vec = new Ride(AssociatedVehicle, AmountPersons, CargoVolume, CargoWeight, StartingPrice, Kilometres, StartingTime, EndTime);
		Rides.push_back(vec);
	};
	return Rides;

};

void Ride::SaveInFile() {
	fstream my_file;
	Vehicle* v1 = GetAssociatedVehicle();
	my_file.open("my_file1.txt", ios::out);
	my_file << v1->GetMakeAndModel() << "|" << v1->GetLicensePlate() << "|" << v1->GetGasUsage() << "|" << v1->GetPricePerKm() << "|" << v1->GetTotalKm() << "|" << GetAmountPersons() << "|" << GetCargoVolume() << "|" << GetCargoWeight() << "|"<< GetStartingPrice() << "|" << GetKilometres() << "|" << GetStartingTime() << "|" << GetEndTime() << "|" << endl;
	my_file.close();
}


string Ride::PrintRide() {
	return " License plate : " + this->AssociatedVehicle->GetLicensePlate() + to_string(GetAmountPersons()) + to_string(GetCargoVolume()) + to_string(GetCargoWeight()) + to_string(GetStartingPrice()) + to_string(GetKilometres()) + to_string(GetStartingTime()) + to_string(GetEndTime()) + "|\n";

};