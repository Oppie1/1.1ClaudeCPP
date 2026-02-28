#pragma once


//Mother is the BASE class. It serves as a blueprint that defines the member variables and functions
//that can be inherited by derived class.
class Mother
{

public:
	//Default constructor: initializes a Mother object with no parameters.
	Mother();

	//A public member function. When called, it prints the family's last name.
	//Because it is public, derived classes (like son) inherit access to it.
	void sayOurLastName();

};

