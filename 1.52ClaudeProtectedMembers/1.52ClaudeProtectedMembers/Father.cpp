#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//This function proves that a Father object has unrestricted access to ALL of its own
//members - public, protected, and private - and prints their values

void Father::fatherObjAllAccess() {

	//Father can access its public member
	publicV = 4;
	//Father can access its protected member
	protectedV = 5;
	//Father can also access its private member (derived classes cannot)
	privateV = 6;

	//Print all three values to show full access.
	cout << "The public variable is: " << publicV << "\n" << endl;
	cout << "The protected variable is: " << protectedV << "\n" << endl;
	cout << "The private variable is: " << privateV << "\n" << endl;
}