#pragma once



//Son is a derived class that inherits from Mother (the base class).
//This means Son sutomatically has access to Mother's public members
class Son : public Mother
{

public:
	//Constructor: still required even though Son inherits from Mother. When a Son object
	//is created, this constructor runs to initialize it.
	Son();
};

