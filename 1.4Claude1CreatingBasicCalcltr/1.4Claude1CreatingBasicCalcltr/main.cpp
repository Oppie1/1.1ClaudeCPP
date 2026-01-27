#include <iostream>
using namespace std;


//Demonstrate building a basic calculator

int main()

{
	//Declare integer variables (uninitialized - they contain garbage values until asssigned)
	int a; //Will store the first user input
	int b;//Will store the second user input
	int sum; //Will store the result of addition

	cout << "------Basic Calculator!-----" << endl;
	cout << "Please enter a number: " << endl;
	cin >> a;//Read user input and store it in 'a'

	cout << "\nPlease enter another number: " << endl;
	cin >> b; //Read user input and store it in 'b'

	sum = a + b;//Calculate the sum and store the result
	//No need to repeat "int" here since sum was already declared above

	cout << "The sum of those numbers is: \n" << sum << endl;//Output the result

	return 0;

}//