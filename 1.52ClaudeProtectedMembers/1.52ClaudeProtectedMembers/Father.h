#pragma once



//Father (Base Class)
//----------------------------------	
// This class serves as the base class in our inheritance hierarchy. It declares one member
// variable under each access specifier to illustrate the difference
// public - Accessible by everyone (Father objects, Son objects, outside code).
// protected - Accessible by Father and any class that derives from it (e.g. Son)
// private - Accessible ONLY within the Father class itself.
//
class Father
{
public:
	//Demonstrates that a Father object can access all of it's own members
	void fatherObjAllAccess();

	//Accicible by Father, Son, and any external code.
	int publicV;

protected:
	//Accessible by Father and its derived classes, but not by external code.
	int protectedV;

private:
	//Accessible ONLY by Father - derived classes like Son cannot use this.
	int privateV;
};

