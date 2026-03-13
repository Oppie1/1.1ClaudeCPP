#include <iostream>
#include <fstream>//Required for inut file stream operations (reading data from a file)
using namespace std;

//To run this program, first create a text file (e.g., using Notepad) named "molts.txt"
//Each line in the file should contain three values in this order: id, name, money.
// Example line: 1 John 250.75
// Save the file in the same folder as the project's source files (the root project folder,)
// not the debug release output folder).
//

int main() {

	//Create an if stream object called adamFile and open "molts.txt" for reading
	//The ifstream class handles all file inpu operations.
	ifstream adamFile("molts.txt");

	//Declare varaibles to hold each field read from the file. Each variable corresponds to one value
	//on each line in molts.txt. Here a single line holds three values -> id, name, and money.
	int id;
	string name;
	double money;

	//Use a while loop to read through the file one line at a time. The >> operator extracts each 
	//whitespace-separated vlue into its matching variable. The loop continues until all lines have
	//been read or an error occurs.
	while (adamFile >> id >> name >> money) {

		//Print each record to the console in a readable, comma-separated format. The order matches 
		//the order the values were read from the file.
		cout << id << " ," << name << " ," << money << endl;

	}
}