#include <iostream>
#include <string>
using namespace std;



//Tutorial: Getters, Setters, and Constructors
//This program demonstrates how to safely access private class data using getter and setter methods.
// Key Concept: Private member variables can only be accessed within their class. To interact with them from ouside
//(like in main), we use public getter/setter methods following encapsulation principles.
//

class OppieClass1 {

public:
	//Constructor: Accepts a string and initializes the private member variable
	//This is called automatically when creating an object: OppieClass1 oppieObject1("text");
	OppieClass1(string z) {
		setParameterSentence(z);//Delegates to the setter method to store the value

	}
	//Setter: Stores the provided string in the private member variable. This method controls how data enters the class (encapsulation)
	void setParameterSentence(string x) {

		parameterSentence = x; 
	}

	//Getter: Returns the private member variables's value. This method provides controlled access to private data
	string getParameterSentence() {

		return parameterSentence;
	}

private:
	//Private member variable: Only accessible within this class
	//External code must use getter/setter methods to interact with it
	string parameterSentence;
};


int main()
{

	cout << "\n-----  getters and setters along with constructors------\n\n";

	//Create object and pass string to constructor
	//Flows: main -> constructor -> setter->  private member variable
	OppieClass1 oppieObject1("Example of constructor and accessing private data with getter and setter!");
	
	//Retrieve and display the private data using the getter
	//Flow: main calls getter -> getter returns private member variable
	cout << oppieObject1.getParameterSentence();
	cout << endl;

	cout << "\n\n-------And the second constructor-------\n" << endl;

	//Uncomment below to see a second example
	//OppieClass1 oppieObject2("I am the second objects constructor!");
	//cout << oppieObject1.getParameterSentence();

}