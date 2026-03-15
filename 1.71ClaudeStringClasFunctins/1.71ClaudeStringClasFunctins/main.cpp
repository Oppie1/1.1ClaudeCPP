#include<iostream>
#include<string> //Provides the string class and its member functions
using namespace std;


//Tutorial: String class member functions.
//The <string> library gives us the "string" class. Any variable of a class type is also an instance (object) of that class. So
//s1, s2, s3, and s4 below are both variables (named storage locations of type string) AND objects of the string class, meaning
//we can call member functions on them using the (.) operator.

//

int main() {

	//Creating and Initializing Strings 

	//Strings can contain any characters, including spaces. Each character occupies an index position starting at 0 (not 1).
	//For example, in the string below:
	//Index - 'C', INdex 1 = 'h', Index 2 = 'a', Index 3 'r', ect.
	string s1 = "Characters forming a sentence (string) with no spaces.\n";
	
	//Another way to initialize a string is with constuctor syntax.
	string s2("Hamster");
	//Unitialized strings default to empty (""):
	string s3;
	string s4;

	//Accessing INdividual Characters with at()
	// 
	// The at() member function returns the character at a given index.
	// Here, s1 at(3) returns 'r' ( the 4th character, since indexing starts at 0).
	// Note: If the index points to a space, a blank space is returned.
	// Try changing 3 to 10 and observe the result!
	//
	cout << s1.at(3) << "\n" << endl;

	//Iterating over a string with a for loop
	// 
	// We can print every character in s1 by looping from index 0 up to s1.length(). The length member function returns the total
	// number of characters in the string. Each iteration prints one character: s1.at(0) ->'C". s1.at(1) -> 'h', etc.
	//
	for (int x = 0; x < s1.length(); x++) {
		//
		cout << s1.at(x);
	}

	//Assigning strings
	cout << "\nAssignment example:\n" << endl;

	//Print the original value of s2
	cout << s2 << "\n" << endl;

	//Method 1: Use the assignment operator (=) to copy s2's value into s4
	s3 = s2;
	cout << s3 << "\n" << endl;

	//Method 2: Use the assign() member function to copy s2's value into s4. This functionality equivalent to using the = operator
	s4.assign(s2);
	cout << s4 << "\n" << endl;

	//Since s3 and s4 were both assigned from s2, all three now hold "Hamster"
	cout << s2 << ' ' << s3 << ' ' << s4 << endl;
}