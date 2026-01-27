#include <iostream>
using namespace std;

//Demonstration of 'garbage value'

int main() {
	
	int a; //Uninitialized - contains garbage

	cout << "Value of 'a' before assignment like commented out code below gets an error." <<endl;
	//cout << "Value of 'a' before assignment " << a << endl;//Could print anything!
	cout << "---------------------------------------\n";
	cout << "Now enter a value: " << endl;

	cin >> a;//NOW 'a' has a meaningful value

	cout << "Value of 'a' after assignment " << a << endl;//Prints what user entered

	return 0;
}

