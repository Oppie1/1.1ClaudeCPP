#include <iostream>
using namespace std;


//Program Purpose: Demonstrate how the OR (||) logical operator works with conditional statements. A person can enter the tradeshow
//if EITHER condition is true: they are old enough OR they have enough tokens

int main() {

	int age;//Variable to store the age entered by the user
	int tokens = 33;//Number of tokens this group has (this value is fixed, not user input)

	//Display the entery requirements to the user
	cout << "You must be at least be 33 years old or have at 40 or more tokens to enter online tradeshow." << endl;
	cout << "Please enter your age:\n";//Prompt user for their age
	cin >> age;//Read the user's age from the keyboard and store it in the 'age' variable

	//The OR operator (||) evaluates both conditions. If AT LEAST ONE is true, the entire expression is true.
	//In this case: Does the person satisy age > 33 OR tokens >=40? If either is true, they can enter
	if (age > 33 || tokens >= 40) {
		cout << "You are allowed in to the tradeshow." << endl;
	}

	else {//If NEITHER condition is true, the person does not meet the requirements
		cout << "You either don't meet age requirement or do not have enough tokens to participate in online tradeshow." << endl;
	}

	//This section demonstrates program flow: after the if/else finishes, execution continues in main()
	cout << "\n---Back In main()---" << endl;
	cout << "This just shows that once if/else statement has executed control goes back to main() for next step in program." << endl;
}