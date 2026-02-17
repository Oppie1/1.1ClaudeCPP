#include <iostream>
#include "Claudia.h"
using namespace std;


//Tutorial: Member initializer lists
// 
// Member initializer lists initialize member variables BEFORE the constructor body executes. They appear between the parameter list
// (...) and the constructor body {...}, separated by a colon ":".
// 
// Why use them?
// -'const' member variables MUST be initializeed this way (they cannont be assigned inside the constructor body)
// - It is also more efficent for non-const members.
// 
// Program flow:
// 1. main() creates object 'cv' with arguments (3, 87).
// 2. The constructor Claudia(int a, int b) recieves those values.
// 3. The member initializer list sets: regVar = a (3),
// constVar = b (87).
// 4. cv.printInitlzdVarToScrn() calls the member function which prints the stored values to the screen.
//

int main() {

	Claudia cv(3, 87);
	cv.printInitlzdVarToScrn();
}