#include <iostream>
#include "Claudia.h"
using namespace std;


//Here we have our function defintion from the prototype in our header file (just horizonal version of header)
//e.g. Class Claudia{ -> Here we don't need to say "class" it is implied. Just Claudia.
//public:
//Claudia():
//When we create an object in main this is the flow:
//main.cpp Claudia(class) cv(object)->.h Claudia(class) Claudia()(function) -> Claudia(class)::Claudia()function
Claudia::Claudia() {
	cout << "This is the constructor that automatically runs when an object is created." << endl;
	cout << "------I run from the .cpp file-------\n" << endl;
}

//This is the same concept as above. The only difference is that we use the "~" to signify to use a destructor.
Claudia::~Claudia() {

	cout << "\nThis is the destructor. It runs automatically when the code in main ends and objects are being destroyed." << endl;
	cout << "------I run from the .cpp file-------" << endl;

}