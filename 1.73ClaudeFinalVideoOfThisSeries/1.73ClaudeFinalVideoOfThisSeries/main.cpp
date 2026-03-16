#include <iostream>
#include <string>//Required for the string class and its member functions
using namespace std;


//This tutorial demonstrates two useful string member functions:
//- replace(): Replaces a portion of a string with new text.
//- insert : Inserts new text at a specific position in a string.

int main() {

	//Create a string object (s1) using the string constructor. The constructor initializes
	//the object with the provided text in one step.
	string s1("Hello my name is Adam and I completed TNB series more times than I can count...");

	//Print original string.
	cout << s1 << "\n" << endl;

	//Using replace()
	//Syntax: s1.replace(startIndex, count, "replacement")
	// - StartIndex: The position where the replacement begins (0-based)
	// - count : The number of characters to remove starting from startIndex
	// - replacement: The new text to insert in place of the removed characters
	// 
	// Here, index 17 is where A in Adam sits, We replace 4 characters (Adam)
	// with Kanopi Oppie (12 characters. The replacement string does NOT need to be the same length
	// as the text it replaces
	//
	s1.replace(17, 4, "Kanopi Oppie");
	cout << s1 << "\n" << endl;

	//Using inser()
	//Syntax: s1.insert(index,"text")
	// - index : The position where the new text will be inserted (0 - based).
	// - text : The string to insert at that position
	// 
	// Here, we insert "Developer" at index 16, which is right befoe "Kanopi Oppie", effectively
	// making it read "Developer Kanopi Oppie".
	//
	s1.insert(16, " Developer");
	cout << s1 << "\n" << endl;

	//Another replace() example to reinforce that string indices are 0-based.
	//Index 0 is the first character. We replace the first 5 characters
	//Hello with Adam,
	s1.replace(0, 5, "Adam,");
	cout << s1 << endl;
}