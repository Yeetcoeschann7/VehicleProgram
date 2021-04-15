#pragma once
#include "Vehicle.h"
class Truck : private Vehicle {
private:
	int capacity;

public:
	//constructors
	Truck(int, string, int, int);
	Truck();

	//getters
	int getCapacity() {
		return capacity;
	}
};

