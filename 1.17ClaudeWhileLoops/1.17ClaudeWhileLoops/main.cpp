#include <iostream>
using namespace std;



//A while loop repeatedly executes its code block as long as the condition remains true
//The loop checks the condition before each iteration, including the first one

int main()
{
	//Initialize the counter variable to 0 before entering the loop
	int page = 0;//

	// The loop contition is checked: "Is page less than 20?"
	//If true, the code block executes. If false, the loop ends and execution continues after the closing brace
	while (page < 20) {

		//Display the current value of page
		cout << "pages is: " << page << endl;

		//Increment page by 2. This updates the loop variable so the condition will eventually become false
		//For example: 0+3=3, then 3+3 = 6, then 6+3=9, and so on.
		page = page + 3; 

		//After reaching the end of the code block, execution jumps back to the while condition
		//The loop continues until page reaches 21 (since 21<20 is false)
	}

	//Once the while loop condition becomes false, execution continues here
	//This code runs after all loop iterations have completed
	cout << "\nWhen the while loop fully executes you see this statement. That is why it's below all the other information that printed\n";
	cout << "over course of entire while loop. Fully executes just means condition is false i.e. page is not less than (<) 20 -> 21+" << endl;

}