#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

//
//In this tutorial we cover Composition - a fundamental concept in object-oriented programing
//where complex objects are vuilt from simplar ones. This models a "has-a" relationship:
// a complex object (the whole) contains simpler objects (the parts). For example, a Car "has-a"
// Engine, Transmission, and set of Tires
// 
// Key Principles of Comosition:
// 1. Part-Whole RElationship: The part is an integral piece of the whole.
// Example: a heart is part of a person's body.
// 2. Lifetie Management: The whole object owns the part. When the whole is created or destroyed,
// so is the part.
// 3. Undirectional Relationship: The part doesn't know the whole exists
// Example: a heart operates without knowing it belongs to a body/
// 
// Program Structure:
// - Birthday.h / Birthday.cpp -> Defines the Birthday class (the "part").
// - People.h / People.cpp -> Defines the People class (the "whole") which *contains* a Birthday 
// - main.cpp -> Creates objects and kicks everything off.
//

int main() {
	
	//Step: 1: Create a Birthday object.
	//The arguments (month, day, year) are passed to the Birthday constructor
	//which stores them in its private member variables.
	Birthday dateOfBirthObj(11, 01, 1981);

	//Step 2: Create a People object using a name and the Birthday object from above.
	//This is composition in action - the People object now *contains* a Birthday object.
	//The People constructor receives both values and stores them via its member initializer list.
	People claudiaVilla("Claudia", dateOfBirthObj);

	//Step 3: Call printInfo() to display everything.
	//printInfo() prints the name, then internally calls Birthday's printDate() to print the date
	// Because printInfo() is void, it prints directly to the screen and returns control here.
	//
	claudiaVilla.printInfo();

}