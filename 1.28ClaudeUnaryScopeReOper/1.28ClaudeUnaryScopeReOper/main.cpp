#include <iostream>
using namespace std;


//Global variable accessible throught the program
//Use the unary scope resolution operator (::) to access it from within functions

int tuna = 33;

void exampleFunction() {
	cout << "Example of using global variable (tuna)  in function outside main():\n" << ::tuna << endl;
}


int main()
{
	//Local variable - only accessible within main
	int tuna = 20;

	//:: accesses the global tuna (33) instead of local tuna (20)
	//The unary scope resolution opertor (::) explicitly references global variables
	//when a local variable with the same name exists
	cout << "I am global int tuna (using :: operator) variable from within main(){ }:\n" << ::tuna << endl;
	cout << "\nI am tuna variable inside main without :: that can only be used here:\n" << tuna << endl;

	cout << "\n---I am example of function outside main using the global variable int tuna---" << endl;
	//This function call demonstrates that functions outside main() can also access global variables
	exampleFunction();

}