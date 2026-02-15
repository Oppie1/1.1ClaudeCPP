#include <iostream>
using namespace std;



// This lesson demonstrates the sizeof operator, which returns the size in bytes of a type or variable
//We'll use it to determine both the total size of an array and the number of elements it contains.

int main() {

	//Declare an array of 10 double values
	double adam[10];

	cout << "Part 1: Finding the total size of an array\n";
	cout << "The sizeof operator returns the total bytes occupied by the adam array:\n";
	//sizeof returns the total memory (in bytes) used by the entire array
	cout << sizeof(adam) << " bytes " << endl;

	cout << "\nPart 2: Calculating the number of elements\n";
	cout << "To find how many elements are in the array, divide the total size by the size of one element:\n";
	//Dividing the total array size by the size of a single element gives us the element count
	cout << "Number of elements: " << sizeof(adam) / sizeof(adam[0]) << endl;

	//This technique is useful when working with arrays whose size may not be immediately obvious
	//especially when maintaing or modifying existing code
}