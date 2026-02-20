#include <iostream>
#include "Mother.h"
#include "Son.h"
using namespace std;


int main() {

	//Local variables - accessible anywhere within main.
	int nakaiAge = 3;
	int claudiaAge = 19;

	//Create a Son object. Son inherits from Mother, so it can use Mother's members.
	Son nakai;
	//Calls sayName(), which Son inherited from Mother - defined in Mother.cpp
	nakai.sayName();
	//Two ways to display Nakai's age:
	//1. Using the local variable declared above
	//2. Using the inherited member varible from Mother (nakai.age)
	cout << "Nakai! And he is " << nakaiAge << " years old." << endl;
	cout << "Nakai2 is " << nakai.age << " years old.\n" << endl;

	//Create a Mother object directly
	Mother claudia;

	//Calls sayName() on the Mother object - runs the function in Mother.cpp
	claudia.sayName();
	cout << "Claudia! And she is " << claudiaAge << " years old." << endl;
	//Access the member variable age2 directlyh through the claudia object
	cout << "Claudia is " << claudia.age2 << " years old.\n" << endl;

}