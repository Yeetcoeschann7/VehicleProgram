#include "Car.h"
#include <iostream>
#include <string>
using namespace std;

//**************
//Constructors *
//**************
Car::Car(int DoorNum, string Manufacturer, int YearBuilt)
{
	setDoorNum(DoorNum);
	setManufacturer(Manufacturer);
	setYearBuilt(YearBuilt);
}

Car::Car()
{
	setDoorNum(0);
	setManufacturer("Manufacturer Name");
	setYearBuilt(0000);
}

//*********
//Setters *
//*********
void Car::setDoorNum(int DoorNum)
{
	doorNum = DoorNum;
}

//******************
//member Functions *
//******************
void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Number of doors: " << getDoorNum();
}
