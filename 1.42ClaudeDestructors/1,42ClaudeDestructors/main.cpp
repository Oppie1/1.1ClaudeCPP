#include <iostream>
#include "Claudia.h"
using namespace std;

//This tutorial is on destructors which run at the end of a program automatically as objects are destroyed.

int main() {


	//Here we create an object of the (from the) Claudia class -> Class: Claudia Object: cv. When this object is created the
	//constructor runs from the .cpp file. It works like a call but is automatic as the object is being built from a class
	//blueprint/header which operates functions outside the main program here.
	Claudia cv;//When object is created the constructor (cout statement in .cpp) runs here.
	//We print the following in main to show the location of where code runs after the object is created in main.
	cout << "This cout statement is in main and runs after the constructor." << endl;
	//The destructor (cout statement in .cpp) will auto run after main ends as objects are destroyed.

}