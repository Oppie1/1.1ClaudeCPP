#include <iostream>
using namespace std;


//Example: Switch statement demonstration

int main()
{
	//Declare a variable to store the user's age
	int age;

	//Prompt the user for input
	cout << "Please enter your age:" << endl;
	cin >> age;

	//Switch statement: Tests the value of 'age' against multiple cases
	switch (age) {

	case 15:
		//If age is 15 display this message
		cout << "You can get your learners permit." << endl;
		break;//Exit the switch block to prevent fall-through to subsequent cases

	case 16:
		//If age is 16, display this message
		cout << "You can get your drivers license." << endl;
		break;//Exit the switch block

	case 18:
		//If age is 18, display this message
		cout << "You can now vote." << endl;
		break;//Exit the switch block

	default:
		//If no cases match (age is not 15,16, or 18), execute this default case
		cout << "This is the default statement when none of the ages apply\n" << endl;
	}

	//Execution continues after the switch block
	cout << "-----Back in main()-----\n";
	cout << "This is displayed after switch code block as control goes back to main() and whatever code/code blocks may be next" << endl;
	cout << "In this program it's just this cout statement to show where program goes after a code block" << endl;
}