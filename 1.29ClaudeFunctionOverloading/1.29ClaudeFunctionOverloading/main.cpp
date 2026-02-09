#include<iostream>
using namespace std;


//Function overloading allows us to create multiple functions with the same name but different
// parameter types. The compiler automactillay selects the correct function based on the arugment
//type passed in the function call.

//This overload handles handles integer arguments
void printNumber(int x) {
	cout << "\nI am printing an integer:\n" << x << endl;
}

//This overload handles literal decimal numbers (which default to double in C++)
//We use double instead of float for better precision when dealing with literal decimal values
void printNumber(double x) {
	cout << "\nNow I am printing a double:\n" << x << endl;
}

//This overload handles float arguments. Use this when memory effiecency is more important than precision
void printNumber(float x) {
	cout << "\nNow I am printing a float:\n" << x << endl;
}

int main()
{
	int a = 54;//
	float b = 32.4896;//

	//When printNumber() is called with variable 'a' (an int), the compiler selects
	//the overload with the int parameter
	printNumber(a);

	//When printNumber() is called with variable 'b' (a float, the compiler selects
	//the overload with the float parameter
	printNumber(b);

	//Numberic literals without a decimal point are treated as int by default
	printNumber(13);

	//Numberic literals without a decimal point are treated as double by default
	//so the double overload is selected.
	printNumber(3.14);

}

//Key takeaway: The parameter names (like 'x') are just placeholders for whatever arument
//values you pass in. The funciton type is determined by the argument's data type.