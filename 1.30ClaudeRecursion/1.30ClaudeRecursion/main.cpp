#include <iostream>
using namespace std;


//Demonstrates recursion by computing a factorial (e.g., 4! = 4 * 3 * 2 * 1 = 24

//Recursive factorial function: returns x! (x factorial)

int factorialFinder(int x) {
	if (x == 1) {//BASE CASE: When x equals 1, stop recursing and return 1
		return 1;
	}

	else {//RECURSIVE CASE: When x is anything other than 1, multiply x by the factorial of (x - 1)
		return x * factorialFinder(x - 1);
		//Walkthrough with x = 4:
		//1st call: 4 * factorialFinder(3) -- we don't know factorialFinder(3) yet, so recurse
		//2nd call: 3 * factorialFinder(2) --  we don't know factorialFinder(2) yet, so recurse
		// 3rd call: 2 * factorialFinder(1) --factorialFinder(1) hits the base case, returns 1
	}

	//Each pending call is placed on the call stack and resolbes in LIFO (last in, first out) order:
	//factorialFinder(1) = 1
	//factorialFinder(2) = 2
	// factorialFinder(3) = 6
	// factorialFinder(4) = 24
	//
	//IMPORTANT: The base case's "return 1" returns to the *calling instance* of factorialFinder
	//NOT directly to main. The stacked calls unwind one by one until the orifinal call resolves
	//and returns the final result to main.
}

int main()
{
	//factorialFinder(4) ultimately resolves to 24, which is then output to screeen
	cout << "The factorial of 4 is: " << factorialFinder(4) << endl;
}