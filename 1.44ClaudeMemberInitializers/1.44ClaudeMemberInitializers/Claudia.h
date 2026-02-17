#pragma once


//Claudia.h - Class Declaration (the "Blueprint")

//Think of this header file as an outline or table of contents. It declares WHAT the class contains 
// (constructors functions and variables) without defining HOW those functions work. The acutal function definitions (implementations)
// live in Claudia.cpp. A helpful workflow is to write this outline first, then copy the function signatures into the .cpp file
// and fill in the bodies
// 
// The class groups related functions and variables together.
//
class Claudia
{

public:

	//Constructor: takes two integer parameters. When an object is created (e.g., Claudia cv(3,87), these values are forwarded to 
	//the member initializer list in Claudia.cpp to set up the member variables.
	
	Claudia(int a, int b);
	
	//Member function: prints the initialized member variables (regVar and constVar) to the screen
	void printInitlzdVarToScrn();

private:

	//These member variables are only accessible within the Claudia class (the 'private' access specifier prevents direct
	//access from outside, e.g., from main()).
	int regVar;//Stores the first argument passed in
	const int constVar;//Stores the second arument (const requires initializatoin via member initializer list)

};