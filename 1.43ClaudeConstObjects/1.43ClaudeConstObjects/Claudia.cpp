#include <iostream>
#include "Claudia.h"
using namespace std;


//Default constructor for the Claudia class.
//Syntax: ClassName::ClassName() - the scope resolution operator(::) tells the compiler this function belongs to the Claudia class
Claudia::Claudia() {

}

//A regular member function. It can freely read or modify the objects's data members
//A const object CANNOT call this function because the compiler has no guarantee
//that it wont change the object's state.
void  Claudia::normalObject() {

	cout << "I am a regular function. I can be called by non-const objects. " << endl;

}

//A const member function. The 'const' keyword must appear in BOTH the declaration ).h)
// and the definition (.cpp) - they must match or the compiler will treat them as different functions
// 
// Why use const member functions?
// 1. Safety: They guarantee the function won't modify the object's state.
// 2.Access: Only const member functions can be called on const objects.
// 2.Intent: They clearly communicate to other programmers that this operation is read-only (e.g., getters, display functions,
// calculations that don't change internal data).
// 
// REal-world example: A getBalence() function on a BankAccount class should be const because reading the balance shouldn't change it.
//
void Claudia::constantObject()const {

	cout << "I am a const function. I can be called by BOTH const and non-const objects" << endl;
	cout << "but I promise never to modify the object's data." << endl;
}


