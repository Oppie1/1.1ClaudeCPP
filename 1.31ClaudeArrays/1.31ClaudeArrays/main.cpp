#include <iostream>
using namespace std;


//This tutorial demonstrates array usage and element access

int main() {

	
	int adamNumbers[5] = { 61, 71, 3, 43, 91 };

	//Arrays require specifying the size during initialization
	//Array indices start at 0, so this array has indices 0-4 (5 total elements)
	cout << "\nBelow are 3 index locations of values in an array:\n" << endl;
	//Examples of accessing array elements by index
	cout << "At index location 4 the number is:" << adamNumbers[4] << endl;//91
	
	cout << "At index location 1 the number is:" << adamNumbers[1] << endl;//71

	cout << "At index location 0 the number is:" << adamNumbers[0] << endl;//61
}
