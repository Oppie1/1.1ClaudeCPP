#include <iostream>
#include<string>
using namespace std;


//Access Specifiers control visibility of class members
//"public:" - accessible from anywhere, including main()
//"private:" - only accessible from within this class

class AdamsClass {

public:
	//Setter: receives a value from main() and stores it in the private variable
	void setName(string x) {//

		welcomeToCodeRocks = x;
		//We store data in private to protect it from direct external access.
		//This "encapsulation" keeps code organized and prevents accidental modifications that could
		//cause bugs elsewhere.
	}

	//Getter: returns the private variable's value to the caller
	string getName() {

		return welcomeToCodeRocks;
		//Each object has its own copy of this variable, so different objects
		//can store different values (see adamsObject1 vs adamsObject2 below)
	}


private:
	//Private members can only be accessed through this class's public functions.
	//Think of each object as having its own indepentent storeage for this variable
	string welcomeToCodeRocks;

};

int main() {
	//Create an object from AdamsClass - like building a house from blueprints
	AdamsClass adamsObject1;//
	adamsObject1.setName("Welcome to CodeRocks!\n\n");
	cout << adamsObject1.getName();

	//We can create multiple independent objects from the sam class template
	//Each object maintains its own separate data
	AdamsClass adamsObject2;
	adamsObject2.setName("2nd possible message - e.g. Welcome to into to Variables in Classes get/set\n");
	cout << adamsObject2.getName();

}