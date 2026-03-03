#include <iostream>
using namespace std;


//Function templates allow a single function to operate on different data types.
//Instead of writing separate functions for int, double, etc,, we define one template
//and the compiler generates the appropriate version automatically.

//The template keyword introduces a type parameter named "Adam"
//"Adam" is a placeholder name - it represents whatever data type is passed in.
template<class Adam>

//"Adam" is used as both ther return type and parameter types.
//This means the function works with any type that supports the + operator, such as int,
//double, float, etc.
Adam addTogether(Adam a, Adam b) {
	//Returns the sum of two values back to the caller
	return a + b;
}

int main() {
	//Two doubles to demonstrate the template with floating-point values
	double x = 7.65, y = 43.54, z;
	
	//Note: d is declared as int but assigned 3.14 - the decimal is truncated to 3.
	//Both c and d are ints, so the template uses the int version of addTogether.
	int c = 3, d = 3.14, e;
	//Two standard integers to demonstrate the template with whole number
	int f = 6, g = 7, h;

	//In each call below, the complier deduces the type from the arguments and substitutes
	//it in place of "Adam" in the function template.
	z = addTogether(x, y);//Adam = double
	e = addTogether(c, d);//Adam = int (d was truncated on declaration
	f = addTogether(f, g);//Adam = int

	cout << "Here we add two doubles together using template\n\n";
	cout << z << endl;
	cout << "-----------------------------------------\n";
	cout << "\n" << endl;
	cout << e << endl;
	cout << "--------------------------------------------------------\n";
	cout << "Here we add two whole numbers/int together and it uses the template in the same\n";
	cout << "way as when we add two doubles (decimals together):\n" << endl;
	cout << f << endl;

}