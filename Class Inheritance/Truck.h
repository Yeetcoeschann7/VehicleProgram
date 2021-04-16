#pragma once
#include <string>
using namespace std;
#include "Vehicle.h"
#ifndef CAR_H
#define CAR_H
class Truck : private Vehicle {
private:
	int capacity = 0;

public:
	//constructors
	Truck(string, int, int);
	Truck();

	//getters
	int getCapacity() {
		return capacity;
	}

	//setters
	void setCapacity(int);

	//Member Functions
	void displayInfo();
};

#endif
