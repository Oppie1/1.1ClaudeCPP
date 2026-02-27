#include <iostream>
using namespace std;



class ClaudiaVilla {

public:
	//Constructor: initializes claudiaVar to 0
	//Think of this as building a box with an empty slot ready to hold a number
	ClaudiaVilla() {
		claudiaVar = 0;
	}

	//The 'friend' keyword lets an outside function access this class's private members.
	//We declare it here so it's easy to spot. It works the same in an access section but
	//public is the conventional place for it
	friend void claudiaFriend(ClaudiaVilla& cvo);
	//(ClaudiaVilla-> data type (of the ClaudiaVilla class) -> & means "reference to" its 
	//a reference to whatever object being created in main. Inside the function, cvo is not a new
	//box - just another name pointing to the same box(adamObj)

	//*adamObj and cvo -> same object in memory, claudia = 314
	//For all intensive purposes cvo is a placeholder for adamObj in main.

private:
	//This is the private member variable. Normally, nothing outside the class can touch it.
	//The friend function above is the exception - that's the whole point of this tutorial.
	int claudiaVar;


};

//This is the full definition of our freind function, written outside the class. Because we declared
//it as a 'friend' inside ClaudiaVilla, it is allowed to read and write the private member 'claudiaVar'
//directly through the object reference.
void claudiaFriend(ClaudiaVilla& cvo) {
	cvo.claudiaVar = 314;
	cout << "The secret number only a friend of the class can access: "
	<< cvo.claudiaVar << endl;


}

int main() {

	cout << "This demonstrates using the 'freind' keyword to let an outside function " 
	<< "access a class's private members." << endl;
	cout << "Claudia makes a box that has a tool with a number on it. That number is: " << endl;
	
	//Create an object of ClaudiaVilla. The constructor sets claudiaVar to 0.
	ClaudiaVilla adamObj;

	//Call the friend function, passing our object.
	//Even though claudiaVar is private, the friend function can reach in  and change it.
	claudiaFriend(adamObj);
}