#include <iostream>
using namespace std;



//This tutorial demonstrates the difference between pass-by-value and pass-by-pointer/reference:
//- Pass-by-value: Creates a copy of the variable. Changes in the function deon't affect the original
// - Pass-by-pointer: Passes the memory address. Changes in the function modify the original variable.
// 
// Note: In c++, pass-by-pointer uses the "*" operator (not pass-by-reference which uses "&").
//
//Pass-by_value: receives a copy of the argument
void passByValue(int x);

//Pass-by-pointer: receives the memory address of the argument
void passByReference(int* x);

int main() {

	//Declare and initialize two variables
	int betty = 13;
	int sandy = 17;

	cout << "Initial values: betty = " << betty << ", sandy = " << sandy << "\n" << endl;

	//Call passByValue with betty - only the copy will be modified
	passByValue(betty);

	//Call passByReference with sandy's address - original will be modified
	passByReference(&sandy);

	//Display the results after both function calls
	cout << "\nAfter function calls:" << endl;
	cout << "betty = " << betty << " (unchanged because passed by value" << endl;
	cout << "sandy = " << sandy << " (changed because passed by pointer)" << endl;
}

//Pass-by-value: modifies only the local copy
void passByValue(int x) {
	x = 99;
	cout << "\nInside passByValue():" << endl;
	cout << "Local copy x = " << x << endl;
	cout << "This change does NOT affect betty in main()" << endl;
}

//Pass-by-pointer: modifies the original variable through dereferencing
void passByReference(int* x) {
	*x = 66;
	cout << "\nInside passByReference(): " << endl;
	cout << "Dereferenced value *x = " << *x << endl;
	cout << "This change DOES affect sandy in main()" << endl;
}