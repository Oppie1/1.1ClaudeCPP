#include<iostream>
#include "claudia.h"
using namespace std;


//This is the default constructor which is left blank. It creates a blank object which is like a blank/empty box to hold info like
//the function after this -> printedFromCpp. IMPORTANT: We must use the class name (here claudia) with the "::" which is the scope
//resolution operator and then the function that is within the Claudia class in the header. Formatting this way is basically a set
//of instructions and so it must match the header file in order for everything to remain connected, mapping where we need to go.
Claudia::Claudia()
{
};

//This is the same logic. First its part of the printedFromCpp() function matches what we see in the header file:
//Class name = Claudia "::" is the scope (look in class) -> printFromCpp() function.
void Claudia::printedFromCpp() {
	//All this function does is respond to main() call. It prints this to the screen and returns nothing (besides control) back to main
	cout << "I am a function being printed from the .cpp file" << endl;
}