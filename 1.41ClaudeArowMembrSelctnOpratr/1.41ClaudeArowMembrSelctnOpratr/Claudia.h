#pragma once


//So here we have the Claudia class and its members. This will all have matching function definitions in the claudia.cpp file.
//They will follow the same order as here

class Claudia//This is the class which is like a blueprint (the following functions, variables, ect within {     }) are like blank
	//forms that will be filled in with definition in claudia.cpp file.
{
public:

	//This is the default constructor and will be left blank in .cpp file. This is linked to .cpp file in that it is the
	//prototype. In the cpp file this will be defined
	Claudia();
	//This is a function prototype. void just means don't return anything to main.
	void printedFromCpp();

};
