#include <iostream>
using namespace std;


//Key Concept: A for loop must complete all iterations before the program continues to the next statement

int main()
{
	cout << "This for loop will print numbers from 5 to 25, then return control to main." << endl;
	//For loops consist of three parts: initialization, condition, and increment
	//Syntax: for (initialization; condition; increment) { code block }

	//1. Initiation: int x = 5 (creates variable x and sets it to 5)
	//2. Condition: x < 30 (loop continues while this is true)
	//3. Increment: x += 5 (adds 5 to x after each iteration

	for (int x = 5; x < 30; x += 5) {
		//Iteration breakdown:
		//Pass 1:x = 5, 5 <30? true -> prints 5, then x becomes 10
		//Pass 2: x = 10, 10<30? true -> prints 10, then x becomes 15
		// Pass3: x = 15, 15<30? true -> prints 15, then x becomes 20
		// Pass 4: x = 20, 20<30? true->prints 20, then x becomes 25
		// Pass 5: x = 25; 25<30? true-> prints 25, then x becomes 30
		// Pass 6: x = 30; 30<30? FALSE -> loop exits, no code block execution
		
		cout << x << endl;
	}

	cout << "\nGreat job! The loop has completed and control has returned to main." << endl;
	
}