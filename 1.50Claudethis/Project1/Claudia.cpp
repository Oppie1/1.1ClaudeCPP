#include<iostream>
#include "Claudia.h"
using namespace std;


//Constructor Defintion
// Syntax breakdown: Claudia::Claudia(int num)
// -'Claudia::' tells the compiler this belongs to the Claudia class
// - 'Claudia(int num)' is the constructor, receiving the value from main.
// 
// The'm:_c(num)' below is a member initializer list.It directly initializes m_c with the value of num before the constructor 
// body runs. This is the preferred way to initialize member variables in C++
//
Claudia::Claudia(int num)
:m_c(num)
{

}

//printToScreen Definition
// Demonstrates three equivalent ways to access the private member m_c
// All three lines will print the same value. The difference is *how* the member is accessed which is the focus of 
// this 'this' keyword tutorial.
//
void Claudia::printToScreen() {
	//Method 1: Direct access
	//The most common and readable way. Simply use the member variable name directly. The compiler implicitly knows it 
	//belongs to this object
	cout << "h= " << m_c << endl;
	
	//Method 2: this _> (arrow operator)
	//'this' is a pointer to the current object. The arrow '->' dereferences that pointer and accesses the member in one step.
	// Explicitly using 'this_>' is useful when a local variable or parameter has the same name as a member variable
	cout << "this-> " << this-> m_c << endl;
	
	//Method 3: (*this). (dereference + dot operator)
	//'*this' dereferences the 'this' pointer, giving us the actual object. We then use the dot operator '.' to access
	// its member - identical in result to method 2, just written in a more explicit two-step form.
	cout << "(*this).m_c= " << (*this).m_c << endl;
}