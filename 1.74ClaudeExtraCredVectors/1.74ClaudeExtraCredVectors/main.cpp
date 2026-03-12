#include<iostream>
#include <vector>
using namespace std;

//Vectors are dynamic arrays, they can grow and shrik at runtime.

int main() {

	//You can declare a vector with an initial size. Here we create a vector of 5 elements, all default-initialized to 0.
	vector<int> emptyVector(5);

	//Below we declare several vectors initialized with specific values. A key concept: vectors are mutable - we can add, remove,
	//or insert elements at any time, changing their size dynamically.
	vector<int> happyVector = { 1,2,3 };
	vector<int> happyVector2 = { 7,8,9 };
	//This vector is unused. Try swapping it into one of the examples below to experiment!
	vector<int> happyVector3 = { 11,12,13 };
	vector<int> happyVector4 = { 14,15,16 };
	vector<int> happyVector5 = { 21,22,23 };

	cout << "Print full happyVector array to screen: " << endl;

	//Access  a single element by index. Index 2 refers to the third element (value 3)
	int vectorElem = happyVector[2];

	//Loop through the vector, printing each element.  happyVector has 3 elements, so the loop runs 3 times.
	for (int i = 0; i < happyVector.size(); i++) {
		//happyVector[i] retrieves the element at index i.
		cout << happyVector[i] << "\n";
	}

	cout << "Print with replacement value" << endl;
	//Replace an element by assigning a new value at a specific index. Here we overwrite index 0 (value 7) with 6.
	happyVector2[0] = 6;

	//Loop through happyVector2. The first element now prints as 6 instead of the original 7.
	for (int i = 0; i < happyVector2.size(); i++) {

		cout << happyVector2[i] << "\n";
	}

	cout << "Print with push_back() function" << endl;

	//Push_back() appends a new element to the end of the vector, increasing its size by one. Note: we're reusing happyVector2 here
	//- it already had index 0 changed to 6 above. After tis call, happyVector2 contains {5,8,9,10]
	happyVector2.push_back(10);

	//The vector now has 4 elements (indicies 0-3), so the loop runs 4 times.
	for (int i = 0; i < happyVector2.size(); i++) {

		cout << happyVector2[i] << "\n";
	}

	cout << "Print with pop_back() function" << endl;

	//pop_back() removes the last element from the vector, reducing its size by one.
	//hapyVector4 was {14, 15, 16} - after this call it becomes {14, 15}
	happyVector4.pop_back();

	for (int i = 0; i < happyVector4.size(); i++) {

		cout << happyVector4[i] << "\n";
	}

	cout << "Print with erase function" << endl;

	//erase() removes the element at a given iterator position. 
	//begin() = 1 points to the second element (value 22), so happyVector5 becomes {21,23}
	happyVector5.erase(happyVector5.begin() + 1);

	for (int i = 0; i < happyVector5.size(); i++) {

		cout << happyVector5[i] << "\n";
	}

	cout << "Print with insert function" << endl;

	//insert() adds a new element at a give iterator position, shifting subsequent elements forward.
	//Here we insert 33 at index 1 (begin()+1, so happyVector5 becomes {21,33,23}.
	//This also shows we can continue to modify the same vector after previous opererations.
	happyVector5.insert(happyVector5.begin() + 1, 33);

	for (int i = 0; i < happyVector5.size(); i++) {

		cout << happyVector5[i] << "\n";
	}

	cout << "Or using the range based loop method. " << endl;

	//A range-based for loop iterates over every element in the vector automatically - no need to manage an index variable,
	//'curElem' holds the value of each element per iteration
	for (int curElm : happyVector) {
		cout << curElm << endl;
	}

}