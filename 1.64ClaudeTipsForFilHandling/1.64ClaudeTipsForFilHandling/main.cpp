#include <iostream>
#include <fstream>
using namespace std;


int main() {

	//---Example 1: Successfully opening and writing to a file ---
	cout << "---First example is of a file that opens correctly and therefore can be written to\n" << endl;
	
	//Creating an ofstream object with a filename as a parameter will create (or overwrite) that file in the program's 
	//output directory. After running this program, you can verify the file was created by going to: File -> Open -> File ->
	//-> locate "Kanopi.txt"
	ofstream adamFile("Kanopi.txt");

	//Always check if the file opened successfully before attempting to write.
	if (adamFile.is_open()) {
		cout << "The file opened successfully." << endl;
	}
	else {
		cout << "The file did not open correctly." << endl;
	}

	//Since the file opened successfully, this text will be writeen into Kanopi.txt
	adamFile << " This is what is written to the file when it opens correctly when if statement is true.\n";

	adamFile.close();

	//---Example 2: Attempting to open a file in a non-existent directory
	cout << "\n---Example where file does not open and there for cannot be written to---\n" << endl;
	
	//The path "DoesNotExist/Kanopi2.txt" refers to a subfolder called "DoesNotExist" within the current working directory.
	//Since that subfolder doesn't exist, the OS cannot create the file and the open operation will fail.
	ofstream adamFile2("DoesNotExist/Kanopi2.txt");

	//Becuase the directory doesn't exist, is_open() returns false and the else branch runs.
	if (adamFile2.is_open()) {
		cout << "The file opened successfully." << endl;
	}
	else {
		
		cout << "The file did not open correctly." << endl;
	}
	//This write has no effect becuase the file was never successfully opened.
	adamFile2 << " This is what is written to the file when it opens correctly when if statement is true.\n";

	adamFile2.close();
}

//You can confirm Kanopi2.txt was NOT created by checking: File -> Open -> File.
//
// Key Takeaways:
// 1."DoesNOTExist/Kanopi2.txt" asks the OS to create a file inside a subfolder. called "DoesNotExist". Since that subfolder
// doesn't exist, the open fails and is_open() returns false.
// 
// 2. Always use is_open() after creating an ofsteam object to confirm the file is ready for writing before attempting any operations.
//