#include <iostream>
using namespace std;



//Here we have the function definition above the main() program. Typically (like last tutorial) you want to prototype 
// (just the function: void printFavoriteNumber(int x);) for organizational purposes, but I am doing it this way just to 
//demonstrate that this can be done as well.

void printFavoriteNumber(int x) {//Here (int x) is the parameter - it accepts an integer value
	cout << "Alex's favorite number is: " << x << endl;
}

int main() {

	printFavoriteNumber(333); //Here we call the function and pass the argument 333 to parameter x
	//The value 333 is copied into the parameter x when the function is called
	//This results in the function executing: cout<< "Alex's favorite number is: " << 333 << endl;

	return 0;
}

//Key terminology: Argument (333) (from main) is passed to function here with parameter (int x)
//Return values go from functions back to caller (main or other functions) -> Will be covered in later tutorial