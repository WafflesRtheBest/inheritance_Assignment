// Jaime Dano (Barnhill)
// CIS 1202 101
// 4/12/2021
// Description: Vehicle class member functions

#include "Vehicle.h" //Vehicle class
#include <iostream>  //console
using namespace std;

//***********************************************************
// Default Constructor                                      *
//***********************************************************
Vehicle::Vehicle() {
	manufacturer = "Not Found";
	year = 0;
}

//***********************************************************
// Store the parameters in the  member variables            *
//***********************************************************
Vehicle::Vehicle(string vehMan, int vehYear) {
	manufacturer = vehMan;
	year = vehYear;
}

//***********************************************************
// Returns the Manufacturer                                 *
//***********************************************************
string Vehicle::getManu() {
	return manufacturer;
}

//***********************************************************
// Sets the Manufacturer                                    *
//***********************************************************
void Vehicle::setManu(string vehMan) {
	manufacturer = vehMan;
}

//***********************************************************
// Returns the Year                                         *
//***********************************************************
int Vehicle::getYear() {
	return year;
}

//***********************************************************
// Sets the Year                                            *
//***********************************************************
void Vehicle::setYear(int vehYear) {
	year = vehYear;
}

//***********************************************************
// Displays everything in the Vehicle Object                *
//***********************************************************
void Vehicle::displayInfo() {
	cout << "Manufacturer: " << manufacturer << endl;
	cout << "Year: " << year << endl;
}