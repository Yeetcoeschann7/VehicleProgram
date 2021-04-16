#include "Truck.h"
#include <iostream>
#include <string>
using namespace std;

//**************
//Constructors *
//**************
Truck::Truck(string Manufacturer, int YearBuilt, int Capacity)
{
	setCapacity(Capacity);
	setManufacturer(Manufacturer);
	setYearBuilt(YearBuilt);

}

Truck::Truck()
{
	setCapacity(0);
	setManufacturer("Manufacturer");
	setYearBuilt(0000);
}

//*********
//Setters *
//*********
void Truck::setCapacity(int Capacity) {
	capacity = Capacity;
}

//******************
//member Functions *
//******************
void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "\nTowing capacity: " << getCapacity();
}

