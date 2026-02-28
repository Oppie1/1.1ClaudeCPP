#pragma once
#include "Mother.h" //Must include Mother.h so the compiler knows wehat we're inheriting from.

//Son is DERIVED class of Mother (the base class).
//"public Mother" means Son inherits all public member of Mother
//So Son objects can call sayOurLastName() without redefining it.
class Son : public Mother
{
public:
	//Default construtor for Son. When Son object is created, the Mother constructor runs first (base class)
	//then this Son construtor runs (derived class)
	Son();
};

