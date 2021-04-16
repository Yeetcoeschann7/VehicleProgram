#include "Vehicle.h"
#include <string>
using namespace std;
#ifndef CAR_H
#define CAR_H

class Car : public Vehicle {
private:
	int doorNum = 0;

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