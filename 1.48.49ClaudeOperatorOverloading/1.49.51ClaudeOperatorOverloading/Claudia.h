#pragma once



//This class serves as the blueprint for our operator overloading demo.
//Tip: You can copy this outline into the .cppfile as a guide when writing your function defintions.
class Claudia
{
public:
	//A simple integer member to hold a value for each object.
	int num;
//Default constructor - when a Claudia object is created without , its num value
//is initialized to 0 via the member initializer list in the .cpp file.
	Claudia();

	//Parameterized construtor - requires an integer argument.
	//This lets us create objects like Claudia a(33), setting num to the given value.
	Claudia(int);
	
	//This is the heart of this tutorial: operator overloading.
	//The "operator^" keyword tells the compiler that when it sees the ^ symbol used between
	//two Claudia objects, it should NOT use the default behavior (bitwise XOR)
	//Instead, it will run our custom definition in the .cpp file
	//The parameter (Claudia b) retresents the right-hand operand (e.g., in "a^b", b is passedin here).
	Claudia operator^(Claudia b);
};

