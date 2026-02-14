#include <iostream>
using namespace std;


//Lesson: Printing a Multi-Dimensional Array
//Goal: Declare a 2D array, then use nested for-loops to print its contents as a table (2 rows x 3 columns).

int main() {

	//Step 1: Declare a 2D array with 2 rows and 3 columns.
	//
	//Syntax: int name[ROWS}{COLS} = { {row0}, {row1} }
	//
	//- [2] = 2 rows (index 0 and index 1)
	//- [3] = 3 columns per row (index 0, 1, and 2)
	// 
	// Layout in memory:
	// Row 0 -> {3, 4, 5} (3 elements = 3 columns)
	// Row 1 -> {7, 8, 9} (3 elements = 3 columns)
	// 
	// Note: The total element count is ROWS * COLS (2* 3 = 6),
	// but each row individually contains only 3 elements
	//
	int bertha[2][3] = { {3,4,5}, {7,8,9} };
	
	//Step 2: Outer loop - iterates over each ROW (0, then 1)
	// 
	// On each iteration, the outer loop waits for the entire inner loop
	// to finish before moving on. After the inner loop completes, we print a newline
	// (endl) to separate each row's output, then the outer loop advances to the next ros
	//
	for (int row = 0; row < 2; row++) {

		//Step 3: Inner loop - iterates over each columns (0,1,2) within the current row.
		//This prints every element in the current row, one at a time

		//When row = 0:
		// column 0 -> bertha[0][0] = 3
		// column 1 -> bertha[0][1] = 4
		// column 2 -> bertha[0][2] = 5
		// column 3 -> loop exits (3 < 3 is false)
		// 
		// When row = 1:
		// column 0 ->[1][0] = 7
		// column 1 -> bertha[1][1] = 8
		// column 2 -> bertha[1][2] = 9
		// column 3 -> loop exits (3<3 is false)
		//
		for (int column = 0; column < 3; column++) {
			//
			cout << bertha[row][column] << " ";// Print the element followed by a space
		}

		//Step 4: After all columns in the current row are printed,
		//output a newline to move to the next row on screen
		cout << endl;

	}

}

//Expected Output:
//3 4 5
//7 8 9