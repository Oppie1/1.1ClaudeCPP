#include <iostream>
using namespace std;


//This tutorial demonstrates how to populate and display an array using loops.
//We create an array with 9 elements (indices 0-8, since arrays start at 0),
//then use a for loop to assign values and display them.


int main()

{

	int adamArray[9];//Creates an array with 9 elements (indices 0-8)

	cout << "Element - Value" << endl;//

	//Use a for loop to populate and display each array element
	//Note: The variable 'x' serves dual puposes here:
	//1. Loop counter (0 through 8)
	//2. Array index (adamArray[x])
	for (int x = 0; x <= 8; x++) {

		adamArray[x] = 99;//Assign the value 99 to each element

		cout << x << " ------ " << adamArray[x] << endl;
	}

	cout << "\nCongratulations! you have set each element of the adamArray to 99. You are now back in main()" << endl;

	//Tip: In programs, you would typically continue with additional code blocks after this section,
	//building up functionality piece by piece rather than putting everything in one large main() function.
}