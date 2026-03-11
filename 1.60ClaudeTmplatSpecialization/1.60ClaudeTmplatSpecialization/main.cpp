#include<iostream>
using namespace std;


//Template specialization allows a programmer to define a specific version of a template for a particular data type. When that is 
//used, the compiler picks the specialized version instead of the generic one. Here, the Adam class has two versions: a generic
// version that handles any type, and a specialized version that handles "char" specifically.
// 
// This is the generic (primary) class template. The type parameter "T" is a placeholder
// that the compiler replaces with a concrete type (e.g., int, double) at compile time
//
template<class T>
//This is the primary Adam class template. It handles all data types except those that have an explicit specialization defined below.
class Adam {

public:
	//Generic constructor that accepts a value of type "T". This constructor runs for any type that does not have its own specialization.
	//The parameter "x" holds the value passed in from main().

	Adam(T x) {
		cout << x << " is not a character! " << endl;
	}
};

//The empty angle brackets "template<>" indicate this is an explicit (full) specialization of the primary Adam template. No 
//new type parameter is introduced here because the type "char" is declared directly on the class below.
template<>
//This is the specialized version of the Adam class for the "char" type.
//When Adam is instantiated with "char", the compiler selects this version instead of the primary template above.
class Adam<char> {
public:
	//Specialized constructor that accepts a value of type "char". This constructor runs only when Adam is instantiated with a 
	// //"char" template argument.
	// The parameter "x" holds the character value passed in from main().
	//
	Adam(char x) {
		cout << x << " is indeed a character!" << endl;
	}
};


int main() {
	
	//Instantiates Adam with "int" as the template argument. The compiler substitutes "T" with "int" in the primary template and 
	//passes 7 to the constructor.
	Adam<int> ato(7);
	//Instantiates Adam with "double" as the template argument. The compiler substitutes "T" with "double" in the primary 
	//template and passes 3.1415 to the constructor.
	Adam<double>ato2(3.1415);
	//Instantiates Adam with "char" as the template argument. The compiler detects the explicit specialization for "char'
	//and uses that version instead of the primary template. 
	Adam<char>ato3('q');
}