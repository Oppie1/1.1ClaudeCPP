#pragma once

//FATHER.H -Bae Class Declaration
// This header declares the Father class, which serves as the BASE CLASS in this inheritance example.
// A base class is the parent that other classes (derived classes) inherit from. Programers typically 
// declare the class here and define its functions in the matching .cpp file.
//

class Father
{
public:
	//BASE CLASS CONSTRUCTOR: Runs automatically whenever a Father OR Son object is created. Becuase Father is the base
	//class, this always runs FIRST, even before the Son construcor executes.
	Father();
	
	//BASE CLASS DESTRUCTOR: The ~ (tilde) marks this as a destructor. Destructors run automatically when objects go out
	//of scope and are destroyed. As the base class destructor, this runs LAST, after the Son destructor finishes.
	~Father();
};

