#include <iostream>
using namespace std;


//Lesson: if-else statements
//This program demonstrates how if-else-if chains work to check mutually exclusive conditions
//Key concept: Once a condition evaluates to true, the remaining conditions in the chain are skipped

int main()
{
	int age = 123;

	//Check if age exceeds upper boundry (134+)

	if (age > 133) {//This takes care of the upper limit for age.  What to do with the immortals.

		cout << "We start out with a standard if statement to find maximum age pool 134+ \n";
	}

	//Important: This condition is only checked if the previous condition was false
	//Even though age>100 is technically true when age > 133, the program never reaches this block because the first condition already executed
	//and terminated the chain

	else if (age > 100) {
		cout << "Wow you're over 100 years old but less than 133!. We use two if statements to find a group of people out many people\n";
	}


	//Check for ages in the mid-range (3-100)
	//Using 'else if' instead of standalone 'if' ensures only one block executes
	//If we used a separate 'if' statement here, it would execute in addition to the first condition
	//when age >133, which is not the desired behavior
	else if (age > 2) {
		cout << "Here we find the find the lower tier/minimum number group of people.  \n";

	}

	//The final 'else' catches all remaining cases (age<=2)
	//This acts as a default case when none of the above conditions are true
	else {
		cout << "Here we find if the age is 1 year old or younger. " << endl;
	}
	return 0;
}



//Summary: In an if-else-if-else chain, only ONE block executes
//Once a condition is true, the program executes that block and skips all reamining conditions
//This is different from using multiple independent 'if' statements, where each would be evaluated separately