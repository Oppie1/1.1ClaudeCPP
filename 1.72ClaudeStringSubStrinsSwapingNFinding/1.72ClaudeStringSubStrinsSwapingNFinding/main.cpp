#include <iostream>
#include <string>//Requited for string and its member functions
using namespace std;

//Tutorial: String Functions - find(), rfind(), swap(), and substr()
//This program demonstrates useful string functions for searching, swapping, and extracting substrings

int main() {

	//Part 1: Finding substrings with find() and rfind()

	string s1("I am the parameter for the s1 variable/object");

	cout << "Original string: \"" << s1 << "\"" << endl;
	cout << "\nSearching for \"am\" in the string...\n" << endl;

	//find() scans left-to-right and returns the index of the FIRST occurrence.
	//"am" first appears at index 2 (the 'a' in "I am")
	cout << "find(\"am\"): index " << s1.find("am") << endl;

	//rfind() scans right to left and returns the index of the LAST occurrence.
	cout << "find(\"am\"): index " << s1.rfind("am") << endl;

	//Part 2: Swapping strings with swap()

	cout << "\n--- Swapping two strings using swap() ---\n" << endl;

	string one("This is string one, which will be swapped with string two.");
	string two("This is string two, which will be swapped with string one");

	cout << "Before swap: " << endl;
	cout << " one: " << one << endl;
	cout << " two: " << two << endl;

	//swap() exchanges the contents of two strings
	one.swap(two);

	cout << "\nAfter swap: " << endl;
	cout << " one: " << one << endl;
	cout << " two: " << two << endl;

	//Part 3: Extracting substrings with substr()

	cout << "\n--- Extracting a substring using substr() ---\n" << endl;

	string s2("This sentence will be used to pull out a substring from it.");

	cout << "Original string: \"" << s2 << "\"" << endl;

	//substr(startIndex, length) returns a new string starting at the given index and spanning the
	//specified number of characters. Here we start at index 14("will") and extract 12 characters: 
	//"will be used".

	cout << "substr(14,12): \"" << s2.substr(14, 12) << "\"" << endl;

	
}