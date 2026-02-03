#include <iostream>
#include <string>
using namespace std;


//This program demonstrates C++ constructors - special functions that initialize objects when they're created
//Constructors allow you to set multiple member variables in one step, rather than assigning each one separately.

class OppieClass1 {

public:

	//Member variables (also called data members or attributes)
	//These store the state of each object created from this class
	string name; //stores the person's name
	int age;//Stores the person's age
	double gpa;//Stores the person's grade point average

	//Constructor: This special function runs automatically when you create an object
	//Parameters: a = name, b = age, c = gpa
	//The constructor takes the values you provide and assign them to the member variables
	OppieClass1(string a, int b, double c) {

		name = a;
		age = b;
		gpa = c;
	}

	//Member functions: Displays a study message
	//This demonstrates how objects can have both data (member variables) and behavior (member functions)
	void study()//
	{
		cout << "Claude is studying" << endl;//
	}

};

//Second example class demonstrating the same constructor concept with different data
class CarClass {

public:

	int year;//Car's year/age
	string make;//Car manufacturer (e.g., Toyota)
	string model;//Car model (e.g., Corolla

	//Constructor: Initializes a can object with three pieces of information
	CarClass(int x, string y, string z) {

		year = x;
		make = y;
		model = z;
	}

	//Member function: Simulates car braking action
	void brake()
	{
		cout << "Car hit the brakes!" << endl;
	}

};


int main() {

	//

	cout << "\nExample of using a constructor to create and initialize objects in one step\n";
	cout << "Constructor Benefits: 1. Creates the object 2. Sets initial values automatically\n\n";

	cout << "\n----- Creating Objects with Constructors -----" << endl;

	//Example 1: Creating a person object
	cout << "\nExample 1 - Person Object: \n";
	//Syntax: ClassName objectName(argument1, argument2,argument3);
	//This creates oppieObject1 and immediately sets name = "Claude", age=33,gpa=3.7
	OppieClass1 oppieObject1("Claude", 33, 3.7);//
	cout << oppieObject1.name << endl;//Access member variables using dot notation
	cout << oppieObject1.age << endl;
	cout << oppieObject1.gpa << endl;
	oppieObject1.study();//Call member function using dot notation

	//Example 2: Creating another person object with different values
	cout << "\nExample 2 - Another Person Object:\n";
	//Each object has its own copy of the member variables with different values
	OppieClass1 oppieObject2("Adam", 42, 4.0);//
	cout << oppieObject2.name << endl;
	cout << oppieObject2.age << endl;
	cout << oppieObject2.gpa << endl;
	oppieObject1.study();

	//Example 3: Creating a car object from a different class
	cout << "\nExample 3 - Car Object:\n\n";
	//You can have multiple classes in the same program, each with their own constructors
	CarClass carObject(2015, "Toyota", "Corolla");
	cout << carObject.year << endl;
	cout << carObject.make << endl;
	cout << carObject.model << endl;
	carObject.brake();

}