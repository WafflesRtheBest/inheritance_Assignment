// Jaime Dano (Barnhill)
// CIS 1202 101
// 4/17/2021
// Description: Vehicle's truck class 


#pragma once
#include <string>
#include "Vehicle.h"
using namespace std;

//Vehicle Class child Truck class
class Truck : public Vehicle {

	//Private 
private:
	int towing;

	//Public
public:
	//Constructor
	Truck(int towing);

	//mutator
	void setVehInfo(string, int);

	//Accessor
	int getTowing();
	void displayInfo();

};

