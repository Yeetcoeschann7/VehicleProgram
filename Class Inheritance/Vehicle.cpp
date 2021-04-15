#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;

//**************
//Constructors *
//**************
Vehicle::Vehicle(string Manufacturer, int YearBuilt)
{
	setManufacturer(Manufacturer);
	setYearBuilt(YearBuilt);
}

Vehicle::Vehicle()
{
	setManufacturer("Manufacturer Name");
	setYearBuilt(0000);
}

//*********
//Setters *
//*********
void Vehicle::setManufacturer(string Manufacturer)
{
	manufacturer = Manufacturer;
}

void Vehicle::setYearBuilt(int YearBuilt)
{
	yearBuilt = YearBuilt;
}

//******************
//member Functions *
//******************
void Vehicle::displayInfo()
{
	cout << "\nVehicle Info: ";
	cout << "\nManufacturer: " << Vehicle::getManufacturer();
	cout << "\nYear Built: " << Vehicle::getYearBuilt();
}