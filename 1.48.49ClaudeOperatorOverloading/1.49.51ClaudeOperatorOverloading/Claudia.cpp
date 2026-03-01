#include <iostream>
#include "Claudia.h"
using namespace std;


//Default construtor - initializes num to 0 using the member initializer list
//This is more efficient than assigning inside the body (num = 0) because it initializes the
//member directly rather than default constructing the reassigning.
Claudia::Claudia() : num(0) {

}

//Parameterized constructor - sets num to whatever integer value is passed in. For example, Claudia(33)
//will create and object whose num equals 33.
Claudia::Claudia(int z) {
	num = z;
}

//Here's the operator overload itself. Let's break down the signature:
// - The first Claudia is the return type (we're returning a new Claudia object).
//Claudia :: scopes us into the Claudia class.
//operator^ is the function name - It redefines what ^ does for Claudia objects.
//(Claudia b) is the right hand operand. The left hand operand (a) is implicit (this->num).
//
//In main, when we write "c = a^b, the compiler translates it to: c = a.operator^(b)
Claudia Claudia::operator^(Claudia b) {
	//WE create a temporary object to hold the result.
	Claudia newObject;
	//Instead of the normal ^ (bitwise XOR), we redefined to perform addition.
	//num refers to the left-hand objects value (a.num), and "b.num" is the right-hand side.
	newObject.num = num + b.num;
	//Retrun the result - this becomes the value assigned to c in main.
	return(newObject);
}