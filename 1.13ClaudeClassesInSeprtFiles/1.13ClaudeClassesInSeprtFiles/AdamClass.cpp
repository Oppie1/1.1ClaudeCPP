#include <iostream>
#include "AdamClass.h"
using namespace std;



//Implementation file: Where we write the actual code for methods declared in the header.
//Think of the header as a table of contents, and this file as the actual chapters.


AdamClass::AdamClass() {
	//Constructor implementation - this code runs when an object is created

	cout << "Constructor executing! Object has been created.\n\n";

	//Example: Library checkout form demonstration
	cout << "===Library Checkout System===\n";
	cout << "Name:_______________\n";
	cout << "Name: ________________\n";
	cout << "Address: ________________\n";
	cout << "Book Title: ________________\n";
	cout << "Signature: ________________\n";
	cout << "\nThank you for using our library system!\n";
	cout << "================================\n\n";
}

//Additional methods would be implemented here following the same pattern:
//ClassName::MethodName() { implementation  }