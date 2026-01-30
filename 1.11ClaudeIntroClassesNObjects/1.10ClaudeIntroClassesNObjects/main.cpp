#include <iostream>
using namespace std;


//Basic C++ data types
//char -> single character ('a', 'B', '7')
//string -> sequence of characters ("Hello")
//int -> whole numbers (42, -7)
//double -> decimal numbers (3.14159)

//A class is a blueprint that defines what data (variables) and behaviors (functions) its
//objects will have.
class AdamsClass {

public:
	//Member function: performs an action when called
	void helloObject() {
		cout << "Hello, welcome to Computer Science Classes/Objects basics. My name is" << endl;
	}

	//Member variable: stores data (try changing "Adam" to your name!)
	string name = "Adam";
};


int main() {

	//Creating an object and calling its function
	AdamsClass object1;
	object1.helloObject();//The dot (.) operator accesses members of an object
	
	//Creating an object to access a variable
	AdamsClass object2;
	cout << object2.name;//Variables need cout to display; functions handletheir own output
	

	cout << "-----------Bonus----------\n" << endl;
	cout << "You can create an object that  does two things at once," << endl;

	//One object can use both its functions and variables
	AdamsClass object3;
	object3.helloObject();
	cout << object3.name;

	return 0;

}

//Key takeaway: Objects are self-contained units combining data and behavior.
//Think of them as modular building blocks for your program