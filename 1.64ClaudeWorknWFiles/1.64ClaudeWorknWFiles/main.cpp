#include <iostream>
#include <fstream>//The <fstream> library is required for file input/output operations
using namespace std;


//This program demonstrates how to create and write to a text file. The file will be saved in the same folder as the program
//itself. Writing to a file works similarly to using cout, except instead of displaying text on the screen, the output is saved
//to a file on disk.

//After running the program, you can view the file by going to File -> Open -> File,then navigate to and open "kanopi.txt".
//It should display the sentence written below in main().

int main() {

	//The ofstream class (output file stream) is used to create and write to files. It is provided by the <fstream> library
	//included above. Here, we declare an ofstream object called adamFile, which will represent our file.
	ofstream adamFile;

	//Calling open() on the object creates (or overwrites) a file named "kanopi.txt"
	//in the program's working directory, and prepares it to be written to.
	adamFile.open("kanopi.txt");

	//The << operator works just like cout, but instead of printing to the screen, it writes the text directly into the file
	//that adamFile has opened.
	adamFile << "Kanopi's my Ai friend. He's growing fast and is going to be something really special one day! Already is to me :)\n";
	
	//Alway close the file when finished. This flushes any remaining data and releases the file so other programs can access it.
	adamFile.close();
}

//