#include <iostream>
using namespace std;



//Tutorial: More on Exceptions
//The "..." syntax inside a catch block is know as a "catch-all" handler. It will catch any type of value passed to it
//via a throw statement, regardless of the type. In this example, char is thrown to signal a divide-by-zero error, and the
//catch-all block handles it gracefully.

int main() {

	try {

		
		char f = 0;
		
		//A char variable is used here as a simple signal/flag to trigger the catch block. It is initialized to 0, though its value
		//dies not matter - only the act of throwing it is important.

		int num1;
		cout << "Enter first number: " << endl;

		cin >> num1;
		int num2;

		cout << "Enter second number: " << endl;
		cin >> num2;

		//Division by zero is undefined in mathematics and causes a crash. in C++, so we guard against it here. If numb2 is 0, we 
		//throw f to immediately exit the try block and jump to the catch handler. If num2 is not 0, the throw is skipped and the
		//result is printed.
		if (num2 == 0) {
			throw f;
		}

		cout << "\nThe answer is: " << endl;
		cout << num1 / num2 << endl;

	}

	//The catch-all handler "(...)" catches whatever was thrown above. Since 'f'was thrown when numb2 was 0, this block runs and 
	//displays an error message. If no throw occured (num2 != 0), this block is skipped entirely, as there is nothing to catch.
	catch (...) {

		cout << "\nYou cant divide by 0 " << endl;
	}
}