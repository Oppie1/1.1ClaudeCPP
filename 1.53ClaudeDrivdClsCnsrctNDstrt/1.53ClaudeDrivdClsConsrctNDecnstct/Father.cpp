#include<iostream>
#include "Son.h"
#include "Father.h"
using namespace std;


//FATHER.CPP -Base Class Definitions
// This file defines the construcctor and destructor declared in Father.h. These functions run for BOTH
// Father and Son objects due to inheritance.
// 
// BASE Class CONSTRUCTORT DEFINITTION
// Scope resolution (::) tells the compiler: "look inside Father for this function." 
// Flow: Father(class) -> :: (look inside) -> Father (function)
// This runs FIRST when any Son object is created, before the Son constructor.
//
Father::Father() {

	cout << "I am the Father constructor. As you can see I run before the Son as a good father does." << endl;
}

//BASE CLASS DESTRUCTOR DEFINITION
//Scope resolution (::) tells the compiler: "look inside Father for this function."
//Flow: Father(class) -> :: (look inside) -> ~Father(function)
//This runs LAST when objects are destroyed, after the Son destructor has finished.
Father::~Father() {

	cout << "I am the Father destructor. I run after (wait for) the Son to finish running as a good father also does." << endl;
}


