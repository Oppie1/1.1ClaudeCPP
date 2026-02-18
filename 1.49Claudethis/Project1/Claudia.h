#pragma once

//Claudia class - used to demonstrate the 'this' keyword in C++
//The 'this' pointer is a special pointer available inside non-static member functions.
//It always points to the current object that called the function.

class Claudia
{
public:

	//Constructor: accepts a single integer and stores it in the member variable m_c via a member initializer list (see Claudia.cpp).
	//Passing any non-integer argument in main() will cause a compile error.
	Claudia(int);
	//Prints the stored value three different ways:
	//1. Directly via the member variable.
	//2. Using this-> (arrow operator on the this pointer).
	//3. Using (*this). (dereferenced this pointer with dot operator).
	//   - We have the "()" around this to control the flow since the dot operator . binds more tightly than the 
	//	 dereference operator *. The parentheses are need to control the order of operators.
	//   * If we wrote it like this *this.m_c it would try to dereference (this.m_c) - dot runs first
	//	 * When we write it like this -> (*this).m_c -> dereferences 'this' first, THEN accesses m_c to get value
	void printToScreen();

private:
	//Stores the integer value passed in through the constructor. The "m_" prefix is a naming convention indicating this is
	//a member variable belonging to the Claudia class.
	int m_c;

};
