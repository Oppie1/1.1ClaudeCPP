#include <iostream>
#include <fstream>//Provides ifstream, which lets us read data from external files
using namespace std;

//---Program Overview ---
//This is a menu-driven console program that reads game items from a text file ("Items.txt")
//and displays them filtered by their power value. The user picks a category:
// 1) Neutral items (power==0)
// 2) Helpful items (power>0)
// 3) Harmful items (power<0)
// 4) Quit
// 
// ---Items.txt Format
// The ifile should have one item per line, with the name and power separated by a space
//chair 0
// ninja -54
// fruit 43
// 
// Technically everything could go on one line, but using rows imporves readability
// 
// Function prototypes 
// These tell the compiler that these functions exist so they can be called in main()
// before their full definitions appear later in the file.

//Dieplays a menu of categories and returns the user's numeric choic.
int getWhatTheyWant();

//Opens Items.txt and prints only the items matching the chosen category(1,2 or 3).
void displayItems(int x);


int main() {

	cout << "Game Items Selection and Their Current Power Value" << endl;
	cout << "Enter your selection 1-3. Enter 4 to quit program\n" << endl;

	//Local variable that stores which category the user picked.
	//We initialize it by calling getWhatTheyWant(), which shows the menu and returns the user's
	//choice (1-4)

	int whatTheyWant;
	whatTheyWant = getWhatTheyWant();

	//The while loop keeps the program running until the user enters 4.
	//After each selection is handled, we prompt again at the bottom of the loop.
	while (whatTheyWant != 4) {

		//The switch statement routes the user's choice to the correct displayItems() call. Each case
		//passes a different argument (1, 2, or 3) so displayItems knows which power-level filter to apply.
		switch (whatTheyWant) {
		
		//User chose 1 - show neutral items (power==0)
		case 1: displayItems(1);
			break;//break exits the switch so we don't fall through to case 2

		//User chose 2 - show helpful items (power > 0)
		case 2: displayItems(2);
			break;

		//User chose 3 - show harmful items (power < 0)
		case 3:
			displayItems(3);
			break;
		}

		//Prompt the user again. The returned value updates whatTheyWant
		//which the while loop re-evaluates on its next iteration.
		whatTheyWant = getWhatTheyWant();
	}
}

//---getWhatTheyWant---
//Prints the category menu to the console, reads the user's input and returns it to the caller (main). 
//The returned value replaces the function call wherever it was used, e.g.:
//whatTheyWant = getWhatTheyWant; --> whatTheyWant; (if the user typed 2)
int  getWhatTheyWant() {

	//Local variable - only accessible indie this function.
	int choice;

	//Display the three filter options
	cout << "1 - Just plain items " << endl;
	cout << "2 - Helpful items " << endl;
	cout << "3 - Harmful Items" << endl;

	//Read the user's keyboard input and store it
	cin >> choice;

	//Send the value back to wherever this function was called
	return choice;
}

//---displayItems---
//This function does the mainwork of reading and filtering the file.
//
// How it works:
// 1. Opens "Items.txt" by creating an ifstream object. This object acts as a connection to the file,
// similar to how cin connects to keyboard input.
// 2. Reads every name/power pair from the file using a while loop.
// 3. Uses an if-statement to check whether the current items's power matches the selected category,
// and prints it if so.
// 
//The parameter "x" receives the arugument passed from the switch statement in main (1,2 or 3). For example,
// displayItems(2) sets x to 2.
// 
// Note: The ifstream object is created fresh each time this function is called.
// When the function ends, the object foes out of scope and the file is automatically close - no manual
// cleanup needed.
//
void displayItems(int x) {

	//Create an ifstream object and immediately open "Items.txt".
	//This is the constructor call - it builds the object and connects it to the file in one step.
	ifstream objectFile("Items.txt");

	//These two variables will be filled by the >> operator on each loop iteration. The >> operator reads
	//whitespace-delimited tokens, so for line like "ninja -54", it reads "ninja" into name and -54 into power
	string name;
	double power;

	//---Category 1: Neutral items (power==0) ---
	if (x == 1) {
		//"objectFile>>name>>power" attempts to read the next name and power from the file. It returns
		//true if successful, false when the file ends, which naturally stops the while loop.
		while (objectFile >> name >> power) {
			//
			if (power == 0) {
				//
				cout << name << ' ' << power << endl;
			}
		}
	}
	
	//---Category 2: Helpfule Items (power>0)
	if (x == 2) {
		//
		while (objectFile >> name >> power) {
			//
			if (power > 0) {
				//
				cout << name << ' ' << power << endl;
			}
		}
	}
	
	//---Category 3: Harmful Items (power<0)
	if (x == 3) {
		//
		while (objectFile >> name >> power) {
			//
			if (power < 0) {
				//
				//
				//
				//
				cout << name << ' ' << power << endl;
			}
		}
	}
}