#include<iostream>
using namespace std;

int main() {
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age < 0) {//The this condition is not met then the if statement is skipped and the program goes to
		//next step which is the cout statement after the if codeblock
		cout << "Invalid age!" << endl;
		return 1; // Return 1 to indicate an error occurred
	}

	cout << "Valid age entered." << endl;
	return 0; // Return 0 to indicate success
}