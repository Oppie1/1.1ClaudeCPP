#include <iostream>
#include "Birthday.h"
#include "People.h"
using namespace std;

//Constructor: takes the values from the arguments and stores them in the private member variables
//Remember, only member functions of the Birthday class can access these private variables.
Birthday::Birthday(int m, int d, int y) {
	//The"_m" prefix is a naming convention that makes it easy to tell a member variable apart from a local
	//variable or parameter.
	m_month = m;
	m_day = d;
	m_year = y;

}

//printDate() is called from People::printInfo() - this is how composition works in practice.
//The People object doesn't know *how* a date is printed; it simply asks its Birthday object
//to handle it. The function prints the date, then control returns to the caller.
void Birthday::printDate() {

	cout << m_month << "/" << m_day << "/" << m_year << endl;
}