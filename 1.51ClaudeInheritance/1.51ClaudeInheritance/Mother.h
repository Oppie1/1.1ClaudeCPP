#pragma once


//The Mother class is our base class - it serves as a template that defines shared data and behavior
//Any class that derives from Mother (like Son) will have access to its public members.

class Mother
{
public:

	//Member variables: accessible by Mother object and any derived class (like Son) objects.
	//Think of these as shared family data - the Son inherits them automatically.
	//They can be accessed from main through any Mother or Son ojbect
	int age = 11;
	int age2 = 23;

	//Construcutor: Called automatically when a Mother object is created. It initializes the object so it's ready
	//to hold data and call functions.
	Mother();
	
	//Function declaration (defined in Mother.cpp)
	//When called, it executes its body and then returns control back to the caller.
	void sayName();

};
