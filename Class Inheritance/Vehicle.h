#include <iostream>
#include <string>
using namespace std;
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
	string manufacturer;
	int yearBuilt;

public:
	//Constructors
	Vehicle(string, int);
	Vehicle();

	//Getters
	string getManufacturer() {
		return manufacturer;
	}

	int getYearBuilt() {
		return yearBuilt;
	}

	//Setters
	void setManufacturer(string);

	void setYearBuilt(int);

	//Member Functions
	void displayInfo();

};

#endif