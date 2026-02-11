#include <iostream>
using namespace std;


// Tutorial: Passing Array to Functions
// ----------------------------------------
// In this turorial we learn how to pass an array into a function
// We declare a function prototype above main(), then define it below main().
// A "prototype" tells the compiler: "Hey, this function exists and here's its signature."
// The "definition" (below main) contains the actual code that runs when the function is called.
//


void printArray(int theArray[], int sizeOfArray);


int main() {

	int adam[3] = { 5, 10, 15 };
	int claudia[6] = { 10, 20, 30, 40, 50, 60 };

	cout << "The following is the result of the function printArray with parameters (claudia, 6)\n" << endl;

	printArray(claudia, 6);
}

//How Function Calls Work
//---------------------------
// Think of main() as a manager. It doesn't do all the work itself - it delegates tasks to functions like printArray(). When
// main() calls printArray(claudia, 6), it hands off the array "claudia" and the number 6 to the function. The function does its
// job, and then control returns to main().
// 
// Here's how the arguments line up with the parameters
// "claudia" flows into "theArray[]", and "6" flows into "sizeOfArray"
// since the return type is "void", this function doesn't send a value back - it just performs an action (here printing to screen)
// and returns control to main90.
//
//				claudia				6
void printArray(int theArray[], int sizeOfArray) {//Everything in this code block is the definition of this prototype.

	//How The Loop Counter Becomes The Array Index
	// -------------------------------------------
	//Notice that theArray[] in the parameter list has EMPTY brackets. That's because the function doesn't know (or care)
	//how big the array is at compile time - we pass the size separately as "sizeOfArray"
	//Inside the loop, we use the loop counter "x" as the index: theArray[x]. This is the key connection - as x changes each
	// iteration, it points to a different slot in the array:
	// 
	// Iteration 1: x = 0 -> theArray[0] -> 10
	// Iteration 2: x = 1 -> theArray[1] -> 20
	// Iteration 3: x = 2 -> theArray[2] -> 30
	// Iteration 4: x = 3 -> theArray[3] -> 40
	// Iteration 5: x = 4 -> theArray[4] -> 50
	// Iteration 6: x = 5 -> theArray[4] -> 60
	// End:         x = 6 -> 6 < 6? FALSE -> loop stops
	// 
	// so x serves a DUAL purpose
	// 1. It counts how many times the loop has run.
	// 2. It selects which element of the array to access
	// 
	// This is why for-loops and arrays are such a natural pair - the counter walks through every index of the array,
	// one at a time, from 0 to size - 1 (minus sign here not a dash so "size" - 1 because of "0" start location in index) 
	//


	for (int x = 0; x < sizeOfArray; x++) {

		//This line runs once per iteration. Becuase x changes each time, theArray[x] refers to a different element on every pass.
		cout << x << " ------ " << theArray[x] << endl;
	}

	cout << "\nNice work, the for loop has fully executed and now you are back in main(){ }" << endl;
}