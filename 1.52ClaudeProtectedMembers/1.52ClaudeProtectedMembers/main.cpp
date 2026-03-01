#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//Protected Members Demo
//----------------------------------------
//This program demonstrates how access specifiers (public, protected, private)
//control member access in C++ inheritance. A derived class (Son) can access the base
//class's (Father) public and protected members, but NOT its private members.

int main() {

	cout << "This is the Son object access: " << "\n" << endl;
	
	//Create a Son object. Through inheritance, it can access Father's public and protected
	//members, but not Father's private members.
	Son nakai;
	//Call a Son member function that assigns values to the inherited public and protected 
	//variables defined in the Father class.
	nakai.protectedDemo();

	cout << "And this demonstrates the Fathers object access: " << "\n" << endl;
	//Create a Father object. Unlike derived classes, a Father object has full access to ALL
	//of its own members: public, protected, and private.
	Father stepAdam;
	stepAdam.fatherObjAllAccess();



}