#include<iostream>
using namespace std;


int main() {

	//Relational operators are < and >
	// "=" is an assignment operator
	//Relational operators == and !=(does not equal)

	int a = 98;//Sets variable a to 98
	int b = 76;//Sets variable b to 76

	//if() -> Whatever is inside parenthesis is tested -> if(testis run here)
	if (5 < 3) {//If statement is just saying if this is true do this. Or if the statement is not true it will not execute the code
		//block below it
		cout << "1.This if statement would execute if 5 were less than 3 - but it's skipped because the condition is false.\n" << endl;
	}

	if (3 >= 3) {
		cout << "2. Here we use >= sign and this will display if value is greater than or equal to another value\n" << endl;
	}

	if (3 == 3) {//If this were 7==3 the code block below would not run. It would be skipped and move to next part of program
		cout << "3. Does this equal that operator ==. This will run if true.\n" << endl;
	}

	if (5 != 8) {
		cout << "4. Here we use '!=' -> this does NOT equal that.\n" << endl;
	}

	if (a > b) {

		cout << "5.a (98) is greater than b (76) so this code executes.\n" << endl;
	}
}

//Once you have run the program to see which information is displayed adjust the if statements if(adjust expression here) and 
//rerun program how what happens to the output of each statement.
//Hint: In the first run #1 is missing! Lets see if you can make it appear in the output in your adjusted code :)
//Bonus: See if you can make #4 not appear in output to screen.