// Jaime Dano (Barnhill)
// CIS 1202 101
// 4/17/2021
// Description: Vehicle's car class 


#pragma once
#include <string>
#include "Vehicle.h"
using namespace std;

//Vehicle Class child Car class
class Car : public Vehicle {

	//Private 
private:
	int doors;

	//Public
public:
	//Constructor
	Car(int vehDoors);

	//mutator
	void setVehInfo(string, int);

	//Accessor
	int getDoors();
	void displayInfo();

};
