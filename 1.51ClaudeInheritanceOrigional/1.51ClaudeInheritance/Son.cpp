#include <iostream>
#include "Son.h"//Only need Son.h; it already includes Mother.h
using namespace std;

//Son::Son() - Default constructor definition
//When this runs, the Mother() constructor has already been called automatically.
//so the base-class portion of the object is initialized before we get here.
Son::Son() {
	//Nother extra to initialize for Son, but this is where you could add Son-specific setup if 
	//needed in the future.
}