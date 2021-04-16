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
#include "Truck.h"

using namespace std;

//function prototypes
void storeVehicleInfo(Vehicle);
void storeCarInfo(Car);
void storeTruckInfo(Truck);

//******
//main *
//******
int main() {
	cout << "\nVehicle Program\n";
	Vehicle vehicle1;
	Car vehicle2;
	Truck vehicle3;
	storeVehicleInfo(vehicle1);
	storeCarInfo(vehicle2);
	storeTruckInfo(vehicle3);

	endFile();
}
//******************
//storeVehicleInfo *
//******************
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

//****************
//storeCarInfo *
//****************
void storeCarInfo(Car car) {
	string manufacturer;
	int year;
	int doorNum;

	cout << "\n\n\nCar:";

	cin.ignore(100, '\n');
	cout << "\nEnter manufacturer: ";
	getline(cin, manufacturer);
	car.setManufacturer(manufacturer);

	cout << "Enter year built: ";
	cin >> year;
	validateNum(year);
	car.setYearBuilt(year);

	cout << "Enter number of doors: ";
	cin >> doorNum;
	validateNum(doorNum);
	car.setDoorNum(doorNum);

	car.displayInfo();
}

//****************
//storeTruckInfo *
//****************
void storeTruckInfo(Truck truck) {
	string manufacturer;
	int year;
	int capacity;

	cout << "\n\n\nTruck:";

	cin.ignore(100, '\n');
	cout << "\nEnter manufacturer: ";
	getline(cin, manufacturer);
	truck.setManufacturer(manufacturer);

	cout << "Enter year built: ";
	cin >> year;
	validateNum(year);
	truck.setYearBuilt(year);

	cout << "Enter towing capacity: ";
	cin >> capacity;
	validateNum(capacity);
	truck.setCapacity(capacity);

	truck.displayInfo();
}