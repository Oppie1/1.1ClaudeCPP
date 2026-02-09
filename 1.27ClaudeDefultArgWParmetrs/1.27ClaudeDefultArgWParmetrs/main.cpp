#include <iostream>
using namespace std;

//Function prototype with default parameters. When called from main without explicit arguments
//These defaults (l=1, w=1,  h=1) will be used instead

int volume(int l = 1, int w = 1, int h = 1);


int main()
{
	cout << "Here are is the volume of two cubes via length(l) * width(w) * height(h):" << endl;
	cout << "The volume of the cube with arguments 3, 4, 2 (l*w*h) is:" << endl;
	//Explicit arguments override the default parameters defined in the prototype
	cout << volume(3, 4, 2);

	cout << "\n\nExample of using the default parameters in the function when argument does not contain any values:" << endl;
	//When no aruments are provided, the function uses its default parameter values (1,1,1).

cout << volume();
	cout << "\n*The function prototype had '1' for l, w and h in its prototype so that is what was used for calculation" << endl;
}

//Function definition: calculates the volume of a rectangular solid by multiplying length x width x height
//Arguments passed from main are substituted for the parameters, and computed result is returned
int volume(int l, int w, int h) {
	
	return l * w * h;
}