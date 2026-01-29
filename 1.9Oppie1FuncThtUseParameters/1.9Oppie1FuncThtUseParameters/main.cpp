#include <iostream>
using namespace std;



//Here we have the function definition above the main() program. Typically (like last tutorial) you want to prototype 
// (just the function -> void printFavoriteNumber(int x) for organizational purpose but I am doing it this way just to 
//demonstrate that this can be done as well.

void printFavoriteNumber(int x) {//Here (int x) just means that the answer/return to the function must be an integer (int)
	cout << "Alex's favorite number is: " << x << endl;
}

int main() {

	printFavoriteNumber(333); //So here is call from main. It has an argument of "(333)". It just means that we pass 333 to the prototype
	//A prototype is like a blank form that asks for a specific data type (here int). You can think  of it like this:
	//printFavoriteNumber(int 333). So when when we "call" the function definition outside of main we wll get
	//cout << "Alex's favorite number is: " << 333 << endl;

	return 0;
}