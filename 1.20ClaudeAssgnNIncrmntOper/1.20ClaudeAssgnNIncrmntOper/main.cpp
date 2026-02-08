#include <iostream>
using namespace std;




int main()
{

//Tutorial: Increment Operators and Modulus

//Part 2: Understanding Post-Increment (x++)
//Post-Increment means the variable is incremented by one AFTER its used stays 20 in cout statement until variable x (x+2) is used again.

	int x = 20;
	
	cout << "Starting value of x: " << endl;
	cout << "Using POST-Increment (x++):" << endl;
	cout<<"When we write 'cout << x++' the current value is printed first." << endl;
	cout << "Output: " << x++ << endl;//Prints 20, THEN increment x to 21
	cout << "After the operation, x is now: " << x << endl;//Shows 21

	//---Part 2: Understanding Pre-Increment (a++)---
	//Pre-increment means the variable is increment by 1 FIRST and so with (1+a)

	int a = 30;
	cout << "\n\n Starting value of a: " << a << endl;
	cout << "\nUsing PRE_INCREMENT (++a):" << endl;
	cout << "When we write 'cout <<++a', the variable is incremented first. " << endl;
	cout << "Output: " << ++a << endl;//Increments a to 31, THEN prints 31
	cout << "After the operation, a is still: " << a << endl;//Shows 31

	//---Part 3: Understanding the Modulus Operator (%)---
	//The modulus operator returns the REMAINDER of a division operation
	int y = 10;
	cout << "\n\nStarting value of y: " << y << endl;
	cout << "\nUsing MODULUS OPERATOR (%): " << endl;
	cout << "The Modulus operator gives the remainder after division. " << endl;
	cout << "\nExample 1 - Using a variable: " << endl;
	cout << "y % 3 means: 10 divided by 3 = 3 with a remainder of 1 " << endl;
	cout << "Output: " << y % 3 << endl;//Outputs 1
	
	cout << "\n Example 2 - Using literal values: " << endl;
	cout << "10 % 3 means: 10 divided by 3 =3 with a remainder of 1 " << endl;
	cout << "Output: " << 10 % 3 << endl; //Outputs 1
	
	//Even/Odd checking with modulus:
	//When we divide a number by 2, if the remainder is 0, the number is EVEN
	//If the remainder is 1, the number is ODD
	//This works becuase even numbers divide evenly by 2 (no remainder)
	cout << "\nBonus example - Even/Odd checking: " << endl;
	cout << "10 % 2 = " << 10 % 2 << "(remainder 0 means 10 is even)" << endl;
	cout << "11%2= " << 11 % 2 << "(remainder 1 means 11 is odd" << endl;


}