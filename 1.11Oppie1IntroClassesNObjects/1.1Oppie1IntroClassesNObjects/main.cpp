#include <iostream>
using namespace std;


//char -> char holds a single character ('a', 'B', '7') not text.
// string -> Deals with "stringing" characters together
// int x; -> Deals with integer values
//double -> Deals with using decimals e.g. 3.1415926535...


class AdamsClass {//This class is like a template/form for each object.  An object is like a blank
	//piece of paper/box/square etc. with nothing in it or on it. "object1" (below in main()) is an
	//instance of the class. We then use the class with a dot "." separator to class tell the computer what
	//to pull from the/what to do. Here we are using a function from the class (outside of main). "void"
	//is just stating that main is calling/telling the function "helloObject" to run and that's it. It 
	//It "returns" nothing to main. The action happens outside the main() program in a the function.
	//It runs outside of main() then control is returned to main() to do the next thing/step in the program.
	//Here we use a function but another common thing to pull/call from classes are variables. 
	//eg. int (integer, string (characters), double (decimal), char (single character) values.

	//Functions deal with actions to be performed. Here: helloObject();
	//Variables are attributes within class. Here: name
	//Must use " text here  " when seeing (cout) text to screen.
public:

	//Order of does not matter. More for organizational/readability of code.  Here in main() we create
	//the object that runs the function (void helloObject()) -> see main() below and so I choose to put
	//it first. Feel free to put "string = yourName" where ever you like.
	void helloObject() {
		cout << "Hello, welcome to Computer Science Classes/Objects basics. My name is" << endl;
	}

	string name = "Adam";//Here we bring in my name. Please go ahead and type your name here and run
	//the program to see what happens.
};


int main() {

	AdamsClass object1;//Here we create an object (object1)
	object1.helloObject();//We are telling the computer to use object to "tell the function outside the
	//main() what to do. Here we use a "." dot separator. Think of it like a "+" sign. 
	//object1(blank form) + helloObject(); - " Hello, welcome to Computer..."

	AdamsClass object2;//Here we create an object to bring a variable (attribute) into main().
	cout << object2.name;//Since this is not a function we need to use "cout <<" within main() to
	//display variable (name) out to screen.

	cout << "-----------Bonus----------\n" << endl;
	cout << "You can create an object that  does two things at once," << endl;

	//As you can see below objects (here object3) can hold two pieces of information that can be used
	AdamsClass object3;
	object3.helloObject();
	cout << object3.name;

	return 0;

}

//Key point: Think of objects as boxes/forms you are creating within main() that each do something
//different in your main() program. Programmers often have to think modularly while building programs
//like stacking different shape rocks/blocks/boxes.

