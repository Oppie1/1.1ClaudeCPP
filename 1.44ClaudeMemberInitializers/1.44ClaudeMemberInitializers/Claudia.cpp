#include <iostream>
#include "Claudia.h"
using namespace std;

//Claudia.cpp - Class Definition (the "Implementation)
// 
// Each function defined here is prefixed with "Claudia::" to tell the compiler it belongs to the Claudia class declared in Claudia.h
// 
// Claudia :: Claudia(int a, int b)
// ^class     ^function
// 
// The"::" is the scope resolution operator. Think of it as an arrow saying: "Look inside the Claudia class for this function"
// 
// Constructor with member initializer list.
// The arument from main (3, 87) are received as 'a' and 'b'
// then the ':" introduces the initializer list which sets:
//	regVar = a (3)
//	constVar = b (87)
// The constructor body {} is intentionally empty because all the work is done by the initializer list. Think of creating the
// object as building a box that already has tools inside.
//

Claudia::Claudia(int a, int b)
	:regVar(a),//Initializer regVar with the value of 'a'
	constVar(b)//Initializer constVar with the value of 'b'
{

}

//Member function that prints the stored values to the screen. It can access 'regVar' and 'constVar' even though they are
//private, because this function is a member of the same class.
//Code outside the class (e.g., main) cannot access private members directly - it must fo through public member functions like this one.
//
void Claudia::printInitlzdVarToScrn() {

	cout << "The regular variable is: " << regVar << " const variable is: " << constVar << endl;
}