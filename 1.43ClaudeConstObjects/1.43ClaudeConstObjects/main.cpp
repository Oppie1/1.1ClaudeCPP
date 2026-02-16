#include <iostream>
#include "Claudia.h"
using namespace std;



//Tutorial: Constant (const) Objects and Const Member Functions
//
// Key ideas:
// - A 'const' object cannot have its state modified after construction
// - A 'const' object can ONLY call member functions marked as 'const'
// - A 'const' member function promises not to modify any data members.
// -The 'const' keyword must appear in both the .h declaration and .cpp definition.
// 
// Why does this matter?
// When you pass an object by const reference (.e.g., void print(const Claudia& c)),
// the compiler enforces that only const member functions can be called on 'c'.
// This prevents accidental modification and makes code safer and easier to reason about.
// 
int main() {

	cout << "---Calling a function on a regular (non-const) object ---" << endl;
	Claudia cvo;//Create a non-const object. It can call ANY member function.
	cvo.normalObject();//OK: non-const object calling a non-const function.
	//cvo.constnatObject;//AlsoOK! Non-const objects CAN call const functions too.

	cout << "\n--- Calling a function on a constant (const) object ---" << endl;

	const Claudia cvco;//Create a const object. It can ONLY call const member functions
	cvco.constantObject();//Error: const object cannot call a non-const function.
}