#include <iostream>
using namespace std;


//This program demonstrates local variables and while loops. Variables are initialized at the start, and 
//user input is gathered durning execution

int main()
{

	//Loop counter: tracks which iteration we're on (1 through 5)
	int x = 1;
	//Storage for each user input
	int number;
	//Running sum of all inputs (initialized to 0)
	int total = 0;

	//NOTE: Two separate operations occur in this loop:
	//1. 'x' counts loop iterations
	//2.'total' accumulates the sum of user inputs

	cout << "Please enter 5 numbers pressing enter after each input: " << endl;
	//Loop continues while x <= 5 (runs exactly 5 times)
	while (x <= 5) {
		//Read user input into 'number'
		cin >> number;

		//Add current input to running total
		//Example: If total = 3 and number = 7, then total becomes 10
		total = total + number;

		//Increment loop counter (++ means "increase by 1")
		//After 5th iteration, x becomes 6 and loop exits
		x++;

	}

	cout << "Your total is " << total << endl;

	return 0;
}

//KEY CONCEPT: main() is itself a code block that can contain multiple nested code blocks
//(like this while loop), each performing specific tasks to build the complete program