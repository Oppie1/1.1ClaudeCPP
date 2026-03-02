#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;


//SON>CPP - Derived Class Definitions
//This file defines the constructor and destructor in Son.h
// 
// DERIVED CLASS CONSTRUCTOR DEFINITION
// Scope resolution (::) tells the compiler: "look inside Son for this function."
// Flow: Son (class) -> :: (look inside) -> Son (function)
// This runs SECOND, after the Father constructor, when a Son object is created.
//
Son::Son() {

	cout << "I am the Son constructor! I run after the Father constructor but BEFORE both destructors!\n" << endl;

}

//Derived Class Destructor Definition 
//Scope resolution (::) tells the compiler: "look inside Son for this function."
//Flow: Son (class) -> :: (look inside) -> ~Son (function)
//This runs FIRST during destruction , before the Father destructor
Son::~Son() {
	cout << "I am the Son destructor! I run BEFORE the Father destructor." << endl;
}
