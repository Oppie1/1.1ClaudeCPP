#include <iostream>
#include "Mother.h"
#include "Son.h"
using namespace std;


//Constructor: runs automatically when a Mother object is created. 
//Read the syntax as: Mother (class) :: Mother (constructor).
Mother::Mother()
{

}

//Called from main via an object. Reads as: Mother (class) ::sayName (function). 
void Mother::sayName() {

	cout << "My name is Arlo, wait no it's not it is ";
}
