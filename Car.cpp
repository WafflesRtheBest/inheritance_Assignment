// Jaime Dano (Barnhill)
// CIS 1202 101
// 4/12/2021
// Description: Car class member functions

#include "Vehicle.h" //Vehicle class
#include "Car.h" //Car Class
#include <iostream>  //console
using namespace std;

//***********************************************************
// Store the parameters in the  member variables            *
//***********************************************************
Car::Car(int vehDoors) {
	doors = vehDoors;
}

//***********************************************************
// Store the Extra Veh info                                 *
//***********************************************************
void Car::setVehInfo(string vehMan, int vehYear) {
	setManu(vehMan);
	setYear(vehYear);
}

//***********************************************************
// Store the parameters in the  member variables            *
//***********************************************************
void Car::displayInfo() {
	cout << "Manufacturer: " << getManu() << endl;
	cout << "Year: " << getYear() << endl;
	cout << "Doors: " << doors << endl;
}

//***********************************************************
// Return an int for the number of car doors                *
//***********************************************************
int Car::getDoors() {
	return doors;
}