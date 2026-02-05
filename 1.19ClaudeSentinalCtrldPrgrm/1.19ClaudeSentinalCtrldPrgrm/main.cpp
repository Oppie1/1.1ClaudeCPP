#include <iostream>
using namespace std;



//This program demonstrates a sentinel-controlled loop that processes ages until the user enters -1
//A sentinel value is a special input that signals the end of data entry
//The loop maintains a running total of ages and count of people entered, then calculates the average age.

int main()
{

	//Storage variable for user input. When set to -1 (sentinel value), the loop terminates
	int age;
	//Accumulator that tracks the sum of all ages entered
	int ageTotal = 0;
	//Counter that tracks how many people have been entered
	int numberOfPeopleEntered = 0;

	//Get the first age before entering the loop (priming read)
	cout << "Enter first persons age or -1 to quit " << endl;
	cin >> age;

	//Continue looping while age is NOT equal to -1 (!= means "does not equal")
	//When age equals -1, the condition becomes false and the loop exits
	while (age != -1) {
		//Add the current age to the running total
		//Example: If ageTotal is 3 and age is 12, then ageTotal becomes 15. We are summing the total number of years of group.
		ageTotal = ageTotal + age;
		
		//Increment the counter using the ++ operator (adds 1 to the current value).
		numberOfPeopleEntered++;
		
		//Prompt for the next age, then return to the top of the loop to test the condition again/
		cout << "Enter next persons age or -1 to quit" << endl;
		cin >> age;
	}
	
	//After the loop exits, display the results using the accumulated values
	cout << "Number of people entered: " << numberOfPeopleEntered << endl;
	//Calculate and display the average age using an expression within cout
	cout << "Average age: " << ageTotal / numberOfPeopleEntered << endl;
}