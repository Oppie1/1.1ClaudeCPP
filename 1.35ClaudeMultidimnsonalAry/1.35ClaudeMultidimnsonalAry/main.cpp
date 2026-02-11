#include <iostream>
using namespace std;



//This tutorial demonstrates how to access elements in a multi-dimensional array.
//The array below has 2 rows and 3 columns (2x3)
//Syntax: arrayName[row][column]

int main() {
	
	//sally[2][3] means 2 rows and 3 columns.
	//[2] = number of rows: {row}, {row 1}
	//[3] = number of columns per row:three elements in each row
	//Access elements using: [row index][column index]
	int sally[2][3] = { {2,3,4},{8,9,10} };

	cout << "Array sally has 2 rows and 3 columns. Let's access some elements:\n" << endl;

	// sally[0][1] = accesses row 0, column 1 (remember: indexing starts at 0)
	cout << "sally[0][1] = " << sally[0][1] << "\n" << endl;

	//sally[1][1] accesses row 0, column 1 (remember: indexing starts at 0)
	cout << "sally[1][1] = " << sally[1][1] << "\n" << endl;

	//sally[0][0] accesses row 0, column 0
	cout << "sally[0][0] = " << sally[0][0] << "\n" << endl;
}