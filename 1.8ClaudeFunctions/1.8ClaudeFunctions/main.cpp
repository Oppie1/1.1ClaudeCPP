#include<iostream>
using namespace std;



//This is a function prototype. It is necessary to place this at top of main as computers read from top down.  The definition/answer to this
//function is below the main function main(){ main program    }  Definition here (just below main)
void printToScreenFunction();

int main() {

	printToScreenFunction();//This is a function call. It is just code that says execute the function and show result of whatever 
	//is in the code block of the function (here just a cout/print to screen statement.
	return 0;
}

//This is the "definition" (answer) of the function. When computer see "printToScreenFunction()" in main it follows that instruction and shows
//the codeblock (what's inside the brackets like code below) -> {    do this computer (here cout statement below)          }
void printToScreenFunction() {

	cout << "I am executed (outputs to screen) when printToScreenFunction() is called" << endl;
}

//void just means this function doesn't return a value. Main "calls" it. The function executes whatever is inside the curly braces {    }.
//and that's all. Basically, when you put printToScreenFunction() in your main program it's like main saying "hey do this"!
//Other functions can also call (ask for) this function but that's for another lesson.
//Think of functions like mini programs that can be called to perform an action. Main is the conductor and functions are like
//the instruments!