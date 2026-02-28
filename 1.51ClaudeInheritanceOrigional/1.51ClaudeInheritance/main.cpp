#include <iostream>
#include "Son.h"//Only need Son.h; it already includes 
using namespace std;


int main() {



	cout << "The Son is asked what their last name is and responds: " << endl;
	//Create a Son object. This Triggers two constructors in order:
	//1. Mother() - the base class constructor in order:
	//2. Son() - the derived class constructor runs second.
	Son nakai;

	//Call sayOurLastName() on the Son object. Even through this function is defined in Mother, the 
	//Son class inherits it through "public Mother"
	//This is the key idea of inheritance: a derived class gains access to the base class's public
	//(and protected) members.
	//Note: the reverse is NOT true - a Mother object cannot access Son-only members.
	nakai.sayOurLastName();

}