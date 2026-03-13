#include <iostream>
#include<fstream>//Required for file I/O operations. Provides ofstream, ifstream, and fstream classes.
using namespace std;


//This program demonstrates how to create a file and write user-supplied data to it using a while loop. The loop contiuously 
//reads input from the user and writes each entery to "molts.txt" until user quits. To view the results after running:
//File -> Open -> File -> file -> locate "molts.txt" and open it. The data written tot he file mirrors what you would 
//normally see printed to the screen with cout.

int main() {

	cout << "Create a file and variables that store information. Then write/cin file and write information to it." << endl;

	//ofstream (output file stream) is a class used to create and write to files. The object "adamFile" is constructed with
	//"molts.txt" as its target - the file is created automatically if it doesnt exist.
	ofstream adamFile("molts.txt");

	//Prompt the user for input. Important: Data must be space- or newline or newline-separated so the cin can correctly extract
	//each value into its corresponding variable.
	cout << "Enter players ID, Name, and Money leaving a space or pressing enter after each piece of data" << endl;
	
	//Press Ctrl+Z (windows) to signal end-of-input and exit the loop.
	//All data entered up to that point is safely preserved in molts.txt
	cout << "press Ctrl+Z to quit\n " << endl;

	//Declare variables to hold each field of a player's record. Each type is chosen to match the expected input: int for 
	//ID, string for name, double for money.
	int idNumber;
	string name;
	double money;

	//The while loop reads one complete record  (ideNumber, name, money) per iteration. cin>>returns false when Ctrl+z is entered,
	//which ends the loop cleanly.
	while (cin >> idNumber >> name >> money) {
		// Write the current record to the file in a readble, spaced format.
		//adamFile behaves like cout, but directs output to "molts.txt" instead of the screen.
		adamFile << idNumber << " " << name << " " << money << endl;
	}
}