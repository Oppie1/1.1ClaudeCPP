#include <iostream>
#include "Father.h"
#include "Son.h"
using namespace std;

//This function shows that a Son object can use Father's public and protected members, but
//any attempt to use Father's privte members will cause a compile-time error.
void Son::protectedDemo() {

	//Son CAN access Father's public member.
	publicV = 1;
	protectedV = 2;

	//Son CANNOT access Father's private member - uncommenting the line below would cause
	//a compiler error.
	//privateV = 3;

	//Print the values Son was able to set.
	cout << "The public variable is: " << publicV << "\n" << endl;
	cout << "The protected variable is: " << protectedV << "\n" << endl;

	//This would also fail because privateV is inaccessible from Son
	//cout<<"The private variable is: " << privateV <<"\n" << endl;
}