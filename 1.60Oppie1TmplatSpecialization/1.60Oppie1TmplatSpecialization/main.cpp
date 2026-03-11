#include<iostream>
using namespace std;


//In template specialization it is just like it sound. They are special template function data types that programmers
//can use to act/run on an object that has a special/specific case. Like whether the return to a calls arguments should
//be a character or not. Here we use two templates of the Adam class and each will execute under certain circumstances. 

//Here we create a template with data type "T" that will operate on the Adam class.
//T is basically a placeholder for the data type.
template<class T>
//Here we create an Adam class without declaring any parameters for ALL its members 
class Adam {

public:
	//This creates a constructor with a parameter of data type "T" for variable "x".
	//This will be used for anything other than a character. It is our "generic" constructor.
	//The "x" here is just a placeholder for the argument's value in main
	Adam(T x) {
		cout << x << " is not a character! " << endl;
	}
};

//This is the syntax for the next class template. It can be left blank. Without template parameters it just
//uses the template<class T> we established in the first template above. Again, T is just a placeholder for data
//type later.
template<>
//This is where we "tell" the Adam class which data type to look for when call from main is executed.
//We are creating a placeholder for that call of "char" if main call and argument is "char" this says "use ME"
class Adam<char> {
public:
	//This establishes a constructor with the parameter of a char data type. Again the "x" here is just a placeholder.
	Adam(char x) {
		cout << x << " is indeed a character!" << endl;
	}
};


int main() {
	
//template parameter of "int"<> lets compiler know to expect an integer (here 7). Without template parameter program not work.
	//This will by default NOT use template class with "char" and will use blank case.
	Adam<int> ato(7);
//template paramter of "double"<> lets compiler know to expect a decimal value. The object "calls" to class outside of main()
	//and uses the default constructor in the blank class template.
	Adam<double>ato2(3.1415);
//Finally this template parameter "char"<> lets compiler know to use the class/template and function definition with char parameter.
	Adam<char>ato3('q');
}