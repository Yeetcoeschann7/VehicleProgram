
#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle {
private:
	string manufacturer = "Unknown";
	int yearBuilt = 0;

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