#pragma once
#include "Father.h"


//Son (Derived Class)
//------------------------------------------------
// Son publicly inherits from Father, which means it receives all of Father's members.
// However, access rules still apply.
// 
// public members of Father -> accessible in Son.
// protected members of Father - accessible in Son.
// private members of Father -> Not accessible in Son
//

class Son : public Father
{
public:
	//Demonstrates which inherited members Son can and cannot access.
	void protectedDemo();
};

