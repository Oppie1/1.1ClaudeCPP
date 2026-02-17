#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

//Constructor: uses a member initializer list (the syntax after the colon) to set up the private member 
// variables. This is the preferred way to initialize members in C++
// 
// Flow: main() creates a People object with ("Claudia", dateOfBirthObj)
//  -> "Claudia" is passed into 'name', then assigned to 'm_name'
//  -> dateOfBirthObj is passed into 'dateOfBirthObj', then assigned to 'm_dateOfBirthObj'
//  -> Both are now stored in private member variables delcared in People.h
//

People::People(string name, Birthday dateOfBirthObj)
	:

	m_name(name),


	m_dateOfBirthObj(dateOfBirthObj)
{

}

//PrintInfo() is were composition comes together.
// It combines data from the People class (m_name) with functionality from the Birthday class
// (m_dateOfBirthObj.printDate()) to produce a complete output
// 
// Flow: main() calls claudiaVilla.printInfo()
// -> prints "Claudia was born on "
// -> then asks m_dateOfBirthObj to printDate(), which outputs "11/01/1981"
//
void People::printInfo() {
	cout << m_name << " was born on ";
	
	m_dateOfBirthObj.printDate();
}