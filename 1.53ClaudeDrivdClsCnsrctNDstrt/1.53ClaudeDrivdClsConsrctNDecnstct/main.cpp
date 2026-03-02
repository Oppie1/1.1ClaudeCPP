#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;

//MAIN.CPP
//This program demonstrates the Order Of Exectution for constructors and destructors in inheritance relationship.
// The full execution order is :
// 1. Father constructor (base class constructor always runs first)
// 2. Son constructor (derived class constructor runs second)
// 3. Cond in main() (runs after both objects are fully constructed)
// 4. Son destructor (derived class destructor runs first during cleanup)
// 5. Father destructor (base class destructor runs last as the program ends).
//

int main() {

	//This line runs first, before any objects are created
	cout << "I am a cout statement that is the first thing in 'main'\n" << endl;
	
	//Creating a Son object triggers the FULL inheritance chain automatically:
	// the Father constructor runs first, then the Son constructor
	// Note: No Father object needs to be explicitly created -- it happens implicitly
	//
	Son Nakai;
	
	//These lines are the last code written in main(), but they do NOT run last. They run BEFORE the destructors, becuase destructors
	//are triggered automatically when the Son object (Nakai) goes out of scope as main() finishes.
	cout << "In main I am the last bit of code that was written. HOWEVER, I run in between the constructor and destructors" << endl;
	cout << "of BOTH Son And Father. When you have destructors they are always the LAST thing to run then program ends.\n" << endl;

}