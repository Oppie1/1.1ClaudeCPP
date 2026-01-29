#include <iostream>
using namespace std;


//Here we are just taking it one step further. Rather than just having one parameter as an int we can have as many parameters
//as we want.  The argument just needs to have matching values and data types. Here we will use four parameters and then make an
//expression as the "answer/result" of the function.

//The function addNumbers has 4 int parameters (x, y, a, b) 
int addNumbers(int x, int y, int a, int b) {

	int answer = x + y + a + b;// Here we create a local variable within the funtion scope

	return answer;//This is "returned" to the caller which here is the in "main()" program.
}


int main() {

	cout << addNumbers(10, 15, 28, 7);//This "calls" addNumbers function with matching values as arguments (arguments are numbers in parenthesis)
	//Output = 60
	return 0;
}

//Key takeaway: addNumbers(10,15,28,7) is replaced with the "answer" that is returned in the addNumbers() function outside of main
//so, addNumbers(10,15,28,7) = answer (return answer)