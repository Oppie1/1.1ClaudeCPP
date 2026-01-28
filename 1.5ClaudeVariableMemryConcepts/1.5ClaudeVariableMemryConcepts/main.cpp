#include<iostream>
using namespace std;


int main()
{
	int tuna = 99;//Here we set the int variable to 99 (declaration and initialization)
	//This value is stored in memory
	cout << "tuna before reassignment: \n" << tuna << endl;
	tuna = 76;//That variable can be overwritten like this. We also dont need to put data type
	//in front of variable as it has already been declared an int previously in program.
	//if you were to pur the data type in front again (like this: int tuna) you would get an error
	//(redeclaration) and program will not run/execute

	cout << "\nBelow we cout tuna variable after reassignment (tuna = 76) that overwrites\n";
	cout << "initial value of 99 (int tuna = 99)\n" << endl;
	cout << "tuna now (after reassignment: \n" << tuna << endl;

}