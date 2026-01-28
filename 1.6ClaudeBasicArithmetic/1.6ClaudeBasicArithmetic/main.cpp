#include<iostream>
using namespace std;



int main() {

	//Here we are initializing variables though expressions. Remember whenever you want to initialize
	//a variable the variable you want to initialize comes first -> data type variable = value or expression

	int x = 25 % 7;//Demonstrates modulus (%) operator. Just remainder of division (25/7=3 with 4 remainder
	int y = 28 / 4;//Regular division so 7 is output
	int b = 16 + 4;//Addition, etc. etc...
	int a = 3 * (4 + 8);//Here we demonstrate that we must use PEDMAS/order of operations when we use a
	//expression to declare a variable. Order matters!

	cout << "Demonstration of the modulus operator (%) which just gives the remainder of an\n";
	cout << "expression(25 % 7 -> 25 / 7 = 3 with a remainder of 4).So x = \n" << x << endl;
	cout << "Division (28/4 = y) example " << y << endl;
	cout << "Addition: " << b << endl;
	cout << "Example of using PEDMAS/Order of operations 3 * 4 + 8 = 20 is different from \n";
	cout << "3*(4+8) " << a << endl;

	return 0;
}