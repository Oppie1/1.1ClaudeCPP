#include <iostream>
#include<cstdlib>//Provides rand(0 function for generating random numbers
#include <ctime>//Provides time() function to seed the random number generator
using namespace std;



int main()
{
	//See the random number generator with the current time
	//This ensures we get different random numbers each time the program runs
	//Without seeding, rand() would produce the same sequence every time

	srand(time(0));

	cout << "The following prints 9 unique numbers to the screen:\n" << endl;

	//This for loop runs 9 times (x goes from 1 to 9)
	//Each iteration generates and displays a random number between 1 and 6

	for (int x = 1; x < 10; x++) {

		//Generate a random number between 1 and 6 (like rolling a dice)
		//How it words:
		//-rand() generates a large random number
		//- % 6 gives us the remainder when divided by 6 (results in 0-5)
		// - + 1 shifts the range from 0-5 to 1 - 6

		cout << x << " ------ " << 1 + rand() % 6 << endl;
	}

	cout << "\n You have just created a random number generator! " << endl;
	cout << "It generated 9 random numbers between 1 and 6." << endl;
	cout << "The program has now exited the for loop and will endl. " << endl;
}