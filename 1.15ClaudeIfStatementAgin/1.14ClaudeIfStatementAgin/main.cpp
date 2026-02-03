#include <iostream>
using namespace std;



int main()
{
	int x = 11;//We're creating a variable named 'x' and giving it the value 11
	int y = 43;//Similarly, we create another variable 'y' with the value 43. Note: Variable names can
	//be almost anything, but their values must match the data type (int means whole numbers)

	if (x <= y) {
		cout << "This message appears because our condition is true!\n";
		cout << "After the is we return to the main(){  } function/program\n";
	}
	cout << "\n--------Back in main(){ variables, logic, output statements, ect.  }----------\n\n";
	cout << "This line always runs, regardless of the if statement result\n";
	cout << "You'll see this output whether the condition above was true or false" << endl;

	
	//Experiment time! Try changing the values of 'x' and 'y' to see how it affects the output
	//You can also modify the comparison operator (<= means "less than or equal to")
	//Try using >,< or != to see different behaviors
}

//Advanced challenge:
//Professional programmers often use multiple 'if' statements together to handle
//different scenarios and create more complex program logic. 
//These grouped statements form "code blocks" that can test various conditions and produce
//different outputs based on the results.
//Challenge: Add another 'if' statement below the first one to practice

//Key concept: The main() function is like a container that holds all your variables, logic, and output
//statements - it's where your program starts running!