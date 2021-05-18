#include <fstream>
#include <iostream>
#include <vector>
#include "Vehicle.h"

Vehicle::Vehicle() {
	this->MakeAndModel = "";
	this->LicensePlate = "";
	this->GasUsage = 0.0;
	this->PricePerKm = 0.0;
	this->TotalKm = 0.0;
};

Vehicle::Vehicle(string MakeAndModel,string LicensePlate, float GasUsage, float PricePerKm, float TotalKm) {
	this->MakeAndModel = MakeAndModel;
	this->LicensePlate = LicensePlate;
	this->GasUsage = GasUsage;
	this->PricePerKm = PricePerKm;
	this->TotalKm = TotalKm;
};

string Vehicle::GetMakeAndModel() {
	return this->MakeAndModel;
};

void Vehicle::SetMakeAndModel(string MakeAndModel) {
	this->MakeAndModel = MakeAndModel;
}

string Vehicle::GetLicensePlate() {
	return this->LicensePlate;
};

void Vehicle::SetLicensePlate(string LicensePlate) {
	this->LicensePlate = LicensePlate;
};

float Vehicle::GetGasUsage() {
	return this->GasUsage;
};

void Vehicle::SetGasUsage(float GasUsage) {
	this->GasUsage = GasUsage;
};

float Vehicle::GetPricePerKm() {
	return this->PricePerKm;
};

void Vehicle::SetPricePerKm(float PricePerKm) {
	this->PricePerKm = PricePerKm;
};

float Vehicle::GetTotalKm() {
	return this->TotalKm;
};

void Vehicle::SetTotalKm(float TotalKm) {
	this->TotalKm = TotalKm;
};

float Vehicle::CalculateConsumedFuel() {
	return TotalKm * GasUsage;
};

/*float Vehicle::PricePerKm() {
	return 1.04*(100 / GasUsage);
};*/


bool operator < (Vehicle v1, Vehicle v2) {
	char* LicensePlate1 = &v1.GetLicensePlate()[0];
	char* LicensePlate2 = &v2.GetLicensePlate()[0];
	return strcmp(LicensePlate1, LicensePlate2);

};

vector < Vehicle*> Vehicle::ReadFromFile() {
	ifstream file;
	vector<Vehicle*> Vehicles;
	file.open("my_file.txt");
	string line;
	while (file.good()) {
		getline(file, line);
		if (line.size() == 0)
			return Vehicles;
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
		Vehicle* vec = new Vehicle(MakeAndModel, LicensePlate, GasUsage, PricePerKm, TotalKm);
		Vehicles.push_back(vec);
	};
	return Vehicles;
};

void Vehicle::SaveInFile() {
	fstream my_file;
	my_file.open("my_file.txt", ios_base::app);
	my_file << GetMakeAndModel() << "|" << GetLicensePlate() << "|" << GetGasUsage() << "|" << GetPricePerKm() << "|" << GetTotalKm() << "|" << endl;
	my_file.close();
}

string Vehicle::PrintVehicle() {
	return "The model is: "+ GetMakeAndModel() +" | License plate : " + GetLicensePlate() + " | Gas usage : " + to_string(GetGasUsage()) + " | Price per Km " + to_string(GetPricePerKm()) + " | Total Km" + to_string(GetTotalKm()) + "|\n";
	
};
