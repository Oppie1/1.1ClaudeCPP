#include <iostream>
using namespace std;


//This tutorial demonstrates how pointers store and access memory addresses of array elements


int main() {

	//Initialize an array with 5 elements
	int claudia[5];

	cout << "Pointers and Memory addresses Tutorial\n\n";
	cout << "We'll use pointers to store and display memory addresses of array elements.\n";
	cout << "Syntax: int* pointerName = &arrayName[index]\n";
	cout << " - '*' declares a pointer variable\n";
	cout << " - '&' is the address-of operator that gets the memory location\n\n";

	//Create pointer variables that store the memory address of array elements
	//The '*' declares a pointer, and '&' retrieves the address of each element
	int* bp0 = &claudia[0];
	int* bp1 = &claudia[1];
	int* bp2 = &claudia[2];

	//Display the memory addresses stored in our pointers
	cout << "Memory addresses of array elements: \n";
	cout << "bp0 (claudia[0]) is at " << bp0 << endl;
	cout << "bp1 (claudia[1] is at " << bp1 << endl;
	cout << "bp2 (claudia is at: " << bp2 << endl;

	//Demonstrate pointer arithmetic: incrementing a pointer moves it to the next element
	cout << "\n Pointer Arithmetic\n";
	cout << "Using the increment operator (++) on a pointer advances it to the next array element.\n";
	cout << "After bp0++, bp0 will point to the same address as bp1:\n";
	bp0++;
	cout << "bp0 after increment:       " << bp0 << endl;
	cout << "bp1 (unchanged):      " << bp1 << endl;
	cout << "\nNotice they now point to the same memory address!\n";

}