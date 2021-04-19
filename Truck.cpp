// Jaime Dano (Barnhill)
// CIS 1202 101
// 4/18/2021
// Description: Truck functions

#include "Vehicle.h" //Vehicle class
#include "Truck.h" //Truck Class
#include <iostream>  //console
using namespace std;


//***********************************************************
// Store the parameters in the  member variables            *
//***********************************************************
Truck::Truck(int vehTow) {
	towing = vehTow;
}

//***********************************************************
// Store the Extra Veh info                                 *
//***********************************************************
void Truck::setVehInfo(string vehMan, int vehYear) {
	setManu(vehMan);
	setYear(vehYear);
}

//***********************************************************
// Store the parameters in the  member variables            *
//***********************************************************
void Truck::displayInfo() {
	cout << "Manufacturer: " << getManu() << endl;
	cout << "Year: " << getYear() << endl;
	cout << "Towing Capacity: " << towing << endl;
}

//***********************************************************
// Return an int for the towing capacity                    *
//***********************************************************
int Truck::getTowing() {
	return towing;
}

