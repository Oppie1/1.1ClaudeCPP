#pragma once
#include <string>// Needed for std::string
#include "Birthday.h"//Needed because People *contains* a Birthday (composition)
using namespace std;

//The People class represents a person who "has-a" Birthday. This header acts as a blueprint -
//the actual function bodies live in People.cpp
// Tip: copying this skeleton into the .cpp file gives you a nice outline to fill in.
class People
{

public:
	//Constructor: receives a name and a Birthday object.
	//These are stored via a member initializer list in People.cpp
	People(string name, Birthday dateOfBirthObj);
	//Prints the person's full info (name + date of birth) to the screen. Internally calls 
	//Birthday::printDate() - a great example of one class using another's functionality
	void printInfo();

private:
	//Private member variables - prefixed with "m_" by convention.
	//Only member functions of the People class can access these
	string m_name;
	Birthday m_dateOfBirthObj;// <-- This IS composition: a People object owns a Birthday object.

};