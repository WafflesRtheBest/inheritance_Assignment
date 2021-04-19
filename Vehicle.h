// Jaime Dano (Barnhill)
// CIS 1202 101
// 4/17/2021
// Description: Vehicle Base Class 


#pragma once
#include <string> // to use string 
using namespace std;

//Vehicle Class
class Vehicle {

//Private 
private:
	string manufacturer;
	int year;

//Public
public:
	//Default Constructor
	Vehicle();

	//Constructor
	Vehicle(string vehMan, int vehYear);

	//Mutators
	void setManu(string vehMan);
	void setYear(int vehYear);

	//Accessor
	string getManu();
	int getYear();
	void displayInfo();

};