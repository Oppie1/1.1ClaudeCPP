#include <iostream>
using namespace std;


//Function templates can accept multiple type parameters. Here, FIRST and SECOND are two separate type
//placeholders, allowing this template to work with two data types at once.
//Think of a template like a cookie cutter - same shape, applied to different dough.
template <class FIRST, class SECOND>

//The return type is FIRST, meaning the function returns the same type as parameter 'a'
//When called with an int (x) and double (y), FIRST=int and SECOND = double.
//Because the return type is int, any double result will be truncated - the decimal is dropped.
FIRST smaller(FIRST a, SECOND b) {

	//A ternary operator is a concise if/else: (condition ? value_if_true : value_if_false).
	//This returns whichever of 'a' or 'b' is smaller, using the FIRST (return) type.
	return(a < b ? a : b);
}


int main() {

	int x = 89;
	double y = 56.78;

	//smaller(x,y) maps x -> FIRST (int) and SECOND (double). Since 56.78 is truncated to 56. 
	//The output will be 56, not 56.78
	cout << smaller(x, y) << endl;
}