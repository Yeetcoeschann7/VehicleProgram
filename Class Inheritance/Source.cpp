/*
Jacob Lewis
CIS 1202
3-25-21

Instructions:
Class program
*/

#include "Header.h"
#include "Vehicle.h"
#include "Car.h"

using namespace std;

//function prototypes
void storeVehicleInfo(Vehicle);

//******
//main *
//******
int main() {
	cout << "\nVehicle Program\n";
	Vehicle vehicle1;
	storeVehicleInfo(vehicle1);

	endFile();
}

void storeVehicleInfo(Vehicle vehicle1) {
	string manufacturer;
	int year;

	cout << "\n\nVehicle:";

	cin.sync();
	cout << "\nEnter manufacturer: ";
	getline(cin, manufacturer);
	vehicle1.setManufacturer(manufacturer);

	cout << "Enter year built: ";
	cin >> year;
	validateNum(year);
	vehicle1.setYearBuilt(year);

	vehicle1.displayInfo();
}