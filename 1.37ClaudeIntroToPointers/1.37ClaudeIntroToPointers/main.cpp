#include<iostream>
using namespace std;


//Introduction to pointers in C++
//This tutorial demonstrates the fundamentals of pointers and memory addresses

//Key concepts
// 1. Every variable has a memory address where its value is stored
// 2. The "&" (address-of) operator gets the memory address of a variable
// 3. The "*" (pointer) operator declares a pointer variable that stores a memory address
// 2. The "*" (dereference) operator access the value at a memory address
//

int main() {

	//Part 1: Understanding variables and memory
	int fish = 5;

	cout << "Part 1: Variable and its memory" << endl;
	cout << "We declared: int fish = 5;" << endl;
	cout << "Value of fish:  " << fish << endl;
	cout << "Memory address of fish (using &fish):" << &fish << endl;
	cout << "\Key point: Every variable occupies a specific location in memory.\n" << endl;

	//Part 2: Creating a Pointer
	//A pointer is a variable that stores a memory address
	int* fishPointer; //Declares  a pointer to an int
	fishPointer = &fish;//Assigns the address of fish to the pointer

	cout << "Part 2: Using pointers " << endl;
	cout << "We declared: int* fishPointer;" << endl;
	cout << "Then assigned: fishPointer = &fish;" << endl;
	cout << "Value of fishPointer (address it stores): " << fishPointer << endl;


	//Part 3: Dereferencing a pointer
	//The "*" operator can also be used to access the value at a pointer's address
	cout << "Part 3: Dereferencing (Accessing the Value)" << endl;
	cout << "To get the VALUE at the address, we use *fishPointer" << endl;
	cout << "Value of *fishPointer (dereferenced): " << *fishPointer << endl;
	cout << "Value of fish: " << fish << endl;
	cout << "\nNotice: Both print the same value (5)!\n" << endl;
	
	//Part 4: Modifying through a pointer
	cout << "Part 4: Modifying values through pointers" << endl;
	cout << "Original fish value:	" << fish << endl;

	*fishPointer = 10;// Changes the value at the address fishPointer points to

	cout << "After setting *fishPointer = 10: " << endl;
	cout << "Value of fish: " << fish << endl;
	cout << "Value of *fishPointer: " << *fishPointer << endl;
	cout << "\nKey insight: Changing *fishPointer changed fish too!" << endl;
	cout << "They refer to the same memory location.\n" << endl;

	//Summary

	cout << "Summary" << endl;
	cout << "& operator: Gets the address of a variable (&fish) " << endl;
	cout << "* in declaration: Creates a pointer variable (int* fishPointer) " << endl;
	cout << "with pointer: Dereferences to access the value (*fishPointer)" << endl;
	cout << "\nPointers let you work with memory addresses directly!" << endl;


}