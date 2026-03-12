#include <iostream>
using namespace std;


//Tutorial: Exception handling
//Exception handling uses three keywords: try, throw, and catch.
//-try: Wraps a block of code that might encounter an error condition.
//- throuw: Signals that an error has occurred by sending a value (e.g. an error code) to the catch block
// - catch: Receives the thrown value and handles the error gracefully
// 
// This is similar to how a functionreturns a value, except here we are "returning" an error code
// to the catch block instead. The program can then respond to the error without crashing entirely.
// Error codes can carry meaning - the programer or user can look up what a given code represents 
// and act accordingly.
//

int main() {

	cout << "Create an error handler/code try/catch that will stop the program without crashing" << endl;

	//Example 1: Backend /Logic Error
	//This try block runs a section of code that the programer controls. The son's age is hardcodeed to
	//be greater than the mom's, which is logically impossible. This represents a bug a developer
	//might catch during testing.

	try {

		int momsAge = 51;
		int sonsAge = 67;

		//If the invalid condition is detected,throw sends error code 99 to the catch block. Execution
		//of the try block stops immediately at the throw statement.
		if (sonsAge > momsAge) {
			throw 99;
		}

	}

	//catch receives the thrown integer and stores it in x (x = 99 here). The error message is displayed
	//instead of the program crashing.
	catch (int x) {

		//Error shows to screen rather than crashing program.
		cout << "Son can not be older than mom, ERROR NUMBER: " << x << endl;
	}

	//Example 2: Frontend/User input error
	//This try block handles user-supplied data, meaning the error could come from accidental or
	//incorrect input rather than a programing mistake.

	try {

		int dadsAge;
		int daughtersAge;

		cout << "\nPlease enter dads age:\n" << endl;
		cin >> dadsAge;

		cout << "\nNow please enter Daughters age:" << endl;
		cin >> daughtersAge;

		//If the user entered an age for the daughter that exceeds the dad's, throw sends error code 92
		//to the catch block and skips the rest of the try block.
		if (daughtersAge > dadsAge) {
			throw 92;
		}
		
		//This line only runs if no error was throuwn (i.e. the ages were valid).
		cout << "The dads age is: " << dadsAge << " Daughters age is: " << daughtersAge << endl;

	}

	//catch receives the throw integer and stores it in x (x = 92 here)
	catch (int x) {

		cout << "\nDaughter can not be older than dad, ERROR NUMBER: " << x << endl;
	}

}

