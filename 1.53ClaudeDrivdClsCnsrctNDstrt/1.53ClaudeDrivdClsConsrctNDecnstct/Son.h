#pragma once
#include "Father.h"//Including Father.h links the Son class to the Father base class


//SON.H Derived Class Declaration
//This header declares the Son class, which is the DERIVED CLASS in this inheritance example. "class Son : public Father" means
// Son inherits all public members of Father
// When a Son object is created, the Father constructor runs automatically first, then the Son constructor runs. Destruction
// happens in reverse order. Programers typically declare the class here and define its functions in Son.cpp
//
class Son : public Father

{
public:
	//DERIVED CLASS CONSTRUCTOR: Runs automaticalily after the Father constructor.
	Son();
	
	//DERIVED CLASS DESTRUCTOR: Runs automatically when a Son object is destroyed. This runs
	//BEFORE the Father destructor, as destruction is in reverse order.
	~Son();
};

