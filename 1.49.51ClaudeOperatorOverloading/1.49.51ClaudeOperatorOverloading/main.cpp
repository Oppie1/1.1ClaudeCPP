#include <iostream>
#include "Claudia.h"
using namespace std;

//In this tutorial we cover operator overloading - a feature that lets us redefine 
//what a built in operator (like ^, +, ==, etc.) does when used with our custom objects.

int main() {

	//Create two Claudia objects, each initialized with a value of 33.
	Claudia a(33);
	Claudia b(33);
	
	//Create a third object using the default constructor - its num starts at 0
	Claudia c;

	cout << "The value of the two objects a and b added together via use of an operator overload\n";
	cout << "(here ^ -> +) is:" << endl;

	//When the compiler sees "a^b", it calls a.operator^(b), which runs our custom definition
	//in Claudia.cpp. WE've overloaded ^ to perform addition instead.
	c = a ^ b;
	//Out put the result(should be 66)
	cout << c.num;
}