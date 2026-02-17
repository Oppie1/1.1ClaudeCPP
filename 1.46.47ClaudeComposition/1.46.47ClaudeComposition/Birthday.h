#pragma once


//The Birthday class represents a simple date (month/day/year).
//It acts as the "part" in our composition example - a People object will contain one of these
//Remember: only member functions of this class can access its private variables.
class Birthday
{
public:
	//Constructor: receives month, day, year, then stores them in private members
	Birthday(int m, int d, int y);

	//Prints the date to the screen in M/D?Y format
	//This is void, so it performs its work (printing) and returns - no value comes back.
	void printDate();

	
private:
	//Private member variables - prefixed with "m_" to clearly mark them as class members.
	//These hold the values passed in through the constructor.
	int m_month;
	int m_day;
	int m_year;
};