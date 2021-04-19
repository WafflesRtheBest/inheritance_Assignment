// Jaime Dano (Barnhill)
// CIS 1202 101
// 4/18/2021
// Description: Source file with Main function to test header files and functions

#include <iostream>  //console
#include <iomanip>   //formating cout
#include <string> // String stuff
// My class's
#include "Vehicle.h" 
#include "Car.h"
#include "Truck.h"

using namespace std;

//Main Function
int main() {

	//Vairables to temp hold info
	string manu, yr, tow, drs;

	//Get input from user for Manufacturer and Year - store in Vehicle Object
	cout << "Vehicle Program" << endl << endl;

	cout << "Vehicle:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manu);
	cout << "Enter the year built: ";
	getline(cin, yr);
	cout << "Vehicle Information:" << endl;
	//Create Vehicle from the data
	Vehicle v(manu, stoi(yr)); //Use stoi() to convert string to an int
	//Display info
	v.displayInfo();

	//Extra line
	cout << endl;

	//Get input from the user for man, year, doors and store into Car object
	cout << "Car:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manu);
	cout << "Enter the year built: ";
	getline(cin, yr);
	cout << "Enter the number of doors: ";
	getline(cin, drs);
	cout << "Vehicle Information:" << endl;
	//Create a car
	Car c(stoi(drs)); //Use stoi() to convert string to an int
	c.setVehInfo(manu, stoi(yr));
	//Display info
	c.displayInfo();

	//Extra line
	cout << endl;

	//Get input from user for man, year, towing
	cout << "Truck:" << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, manu);
	cout << "Enter the year built: ";
	getline(cin, yr); 
	cout << "Enter the towing capacity: ";
	getline(cin, tow);
	cout << "Vehicle Information:" << endl;
	//Create a Truck
	Truck t(stoi(tow)); //Use stoi() to convert string to an int
	t.setVehInfo(manu, stoi(yr));
	//Display info
	t.displayInfo();

	// END Program
	system("pause");
	return 0;
}
