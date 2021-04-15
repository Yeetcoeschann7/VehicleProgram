#include "Vehicle.h"
#include <iostream>
#include <string>
using namespace std;
#ifndef CAR_H
#define CAR_H

class Car : Vehicle {
private:
	int doorNum;

public:
	//Constructors
	Car(int, string, int);
	Car();

	//Getters
	int getDoorNum() {
		return doorNum;
	}

	//Setters
	void setDoorNum(int);

	//Member Functions
	void displayInfo();
};

#endif