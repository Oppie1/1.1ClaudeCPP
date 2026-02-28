#include <iostream>
#include "Mother.h"//Required so the compiler knows the Mother class declaration
using namespace std;


//Mother::Mother() - Default construtor definition.
//When a Mother object (or a derived object like Son) is created, this construtor runs
//first to initialize the Mother portion of the object
Mother::Mother()
{
	//Nothing extra to initialize here, but the object is now fully constructed.
}

// Mother::sayOurLastName() - Member function definition.
//This is the implementation of the prototype declared in Mother.h
//Through inheritance, any derived class (e.g., Son) can also call this function
//on its own objects, becuase a son "is-s" Mother.
void Mother::sayOurLastName() {
	cout << "Our last name is Villa." << endl;
}