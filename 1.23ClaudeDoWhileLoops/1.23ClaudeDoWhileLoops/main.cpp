#include <iostream>
using namespace std;

//Do-while loops guarantee at least one execution before checking the condition
//Less common than while loops, but useful when you need to run code before testing

int main()
{
	//This prints once before entering the loop
	cout << "Make program that counts to 10 " << endl;

	int x = 1;//Initialize counter

	do {
		//Print current value
		cout << x << endl;
		//Increment for next iteration
		x++;

	}
	while (x <= 10);//Condition checked AFTER each iteration
	//NOte:Loop executes while x is less than or equal to 10
	//Note: Loop executes while x is less than or equal to 10
	//When x becomes 11, the condition fails and the loop exits

	//This prints once after the loop eompletes

	cout << "\nCongrats! You instructed computer to count to 10!" << endl;

}

//Key difference: In a do-while loop, the condition is evalueated at the end of each iteration
//guaranteeing the code block runs at least once beofe any condition checking occurs

