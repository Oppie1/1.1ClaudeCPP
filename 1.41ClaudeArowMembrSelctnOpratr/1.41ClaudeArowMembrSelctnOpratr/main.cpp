#include<iostream>
#include "claudia.h"
using namespace std;



//This is main() -> main is like the manager of the program. It will pull from the claudia class to create objects
//It will also call functions where they will execute/run outside of the main() function here and then return control to main() here.

int main() {

	//Here we create an object of the Claudia class. Claudia (class) -> claudiaObject(object) 
	Claudia claudiaObject;
	//Here we crate a pointer (claudiaPointer) from the Claudia class. Claudia* (class pointer - points to class). 
	// ->claudiaPointer (creates a pointer variable) and sets it equal to the & (memory address) of the claudiaObject.
	Claudia* claudiaPointer = &claudiaObject;

	//Here we use the object and the . dot separator to call (run/execute) the function. The "." is basically a + sign in that it is
	//adding the object (which is that blank/empty box and adding the functionality of the function (which is run from the .cpp file)
	claudiaObject.printedFromCpp();
	//Here we ust the arrow member selection operator to point to the the same function. We can do this via the pointer object
	//claudiaPointer because we set that equal to the memory address of the claudiaObject and so use the same function from .cpp file
	claudiaPointer->printedFromCpp();

	//Extra credit
	//Here we set variable x to 42
	int x = 42;
	//We then create a pointer variable p and set it equal to x's memory address
	int* p = &x;
	//We then print that memory address using the variable p
	cout << p << "\n";//output: memory address
	//Here by using "*" with p we dereference the pointer which just means use the value not the memory address of value
	cout << *p;//output: 42
}