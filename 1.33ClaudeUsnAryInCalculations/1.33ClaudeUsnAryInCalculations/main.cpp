#include <iostream>
using namespace std;

//This lesson demonstrates how to sum all elements in an array using a for loop.


int main() {
	//Initialize an array with 5 elements. Array indices range from 0 - 4.
	//Example: tuna[0] = 5, tuna[1] = 10. tuna[2] = 15, etc.
	
	int tuna[5] = { 5,10,15,20,25 };

	//sum will store the running total of all array elements
	int sum = 0;

	cout << "Below is the total of an array with 5 elements added together each iteration.\n" << endl;

	//The for loop iterates through each array element:
	//1. Initialize: x = 0 (first array index)
	//2. Condition: x < 5 (continue while x is less than array size)
	for (int x = 0; x < 5; x++) {
	//Add the current array element to our running sum
		sum += tuna[x];

		//Display the current iteation and cumulative sum
		cout << x << " ------ " << sum << endl;
		
	}
	
	cout << "\nCongratulations, you did it again! You made actionable code in a for loop and now" << endl;
	cout << "you are back in main(). Great job!" << endl;
}