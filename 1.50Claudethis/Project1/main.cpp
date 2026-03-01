#include<iostream>
#include "Claudia.h"
using namespace std;


//Tutorial: The 'this' keyword in C++
// The 'this' keyword is a special pointer available inside every non-static member function of a class. It holds the
// address of the object that invoked the function, allowing a member to refer back to its own object explicitly.
// 
// This program creates a Claudia object and calls printToScreen() to show three different - but equivalent - ways to access a member
// variable two of which make use of the 'this' pointer.
// 
//

int main() {

	//Create a Claudia object name 'cv', passing 23 as the argument. This value travels through the constructor into 
	//member variables of m_c.
	Claudia cv(23);
	
	cout << "Three ways to output the value 23 stored in a Claudia object:\n";
	cout << "-------------------------------------------------------------------------" << endl;
	//Call printToScreen() on the 'cv' object. The dot operator '.' is used to call a member function on an object.
	//Inside printToScreen(), 'this' will point to 'cv'.
	cv.printToScreen();
}