#include <iostream>
using namespace std;

//Class templates allow a single class to work with different data types. Instead of writing separate 
//clases for int, double, ect., se define one class template and let the compiler generate the 
//appropriate version.

//The "template<class T>" declaration tells the compiler that T is a placeholder for a data type that 
//will be specified when the class is used (e.g., int, double). Without this declaration, the class
//below would not compile as a template.
template<class T>

//Adam is a class template. T is not a class that Adam belongs to -
//rather, T is a type parameter that Adam uses internally for its members.
class Adam {
	//first and second are private member variables of the Adam class. Their data type is T, which
	//means they will match whatever type is provided when an Adam object is created(e.g., int or double).
	T first, second;

//The constructor takes two parameters of type T and assigns them to the member variables first and second.
public:Adam(T a, T b) {
	//Assign the constructor arguments to the member variables.
	//After this runs, first and second hold the values passed in by the caller.
	first = a;
	second = b;
}
//This is a member function declaration (prototype) for bigger().
//It tells the compiler that bigger() exists and returns a value of type T.
//The actual implementation is defined outsidee the class below.
	  T bigger();
};

//This is the out-of-class definition of the bigger() member function. It must have its own
//"template<classT>" declaration because it is defined outside the class body and needs to remain a template
template <class T>
//Syntax breakdown:
//T -> return type (same placeholder type as the class)
//Adam<T> -> specifies this function belongs to the Adam class template
//::bigger() member function.
T Adam<T>::bigger() {
	//Uses the ternary operator to compare first and second. If first > second, first is returned;
	//otherwise second is returned. 
	return(first > second ? first : second);
}

int main() {

	cout << "Which number is bigger 3.14 or 6.28?" << endl;
	
	//Creates an Adam object specialized for type double. The <double> in angle brackets tells the 
	//compiler to substitute double for T.
	Adam<double> ato(3.14, 6.28);

	//calls bigger() on ato. Since T is a double, the result is 6.28 (decimal preserved).
	cout <<"\n"<< ato.bigger();

	cout << "\n\nWhich number is bigger 22.3 or 7?" << endl;
	//Creates an Adam object specialized for type int.
	//Even though 22.3 is passed in, it is truncated to 22 becuase T is int. ato2 is the name of this object.
	Adam<int> ato2(7, 22.3);
	//Calls bigger() on ato2. Since T is int, the result is 22 (decimal truncated).
	cout << "\n" << ato2.bigger();
}