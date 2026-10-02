#include <iostream>
#include <utility>
#include <string>


//std::pair is a lightweight container from the <utility> header that groups exactly
//two values under one roof. The two values can share the same type or be completely
//different types (for example, pairing an int with a std::string.

//Pairs are especially handy when a function needs to hand back two results at once, or 
//when you want to keep related pieces of data together p such as X and Y coordinates - 
//without going through the effort of writing a dedicated struct.

//Example 2 prototype
void exampleTwo();

//Example 3 prototype
//Direct unpacking via structured bindings
//A pair cn be decomposed straight into named variables, which tends to produce cleaner,
// more readable code.
//void exampleThree();
// 
// std::pair comes with built-in support for all relational operators
// (++, !=, <, >, <=, >=). Comparisons follow lexicographic order, meaning the elements
// are evaluated one at a time, left to right.
// Example 4 prototype.
void exampleFour();


int main() {

	//Example 1 -> Methods 1 through 4

	//1. Default declaration - members are zero-initialized or default-constructed.
	//(e.g., 0 for int, empty string for std::string.)

	std::pair<int, std::string> p1;
	p1.first = 10;
	p1.second = "Alice";

	std::cout << p1.first << std::endl;
	std::cout << p1.second << std::endl;

	//2. Brace / initializer-list initialization (available since C++11)
	std::pair<int, std::string>p2 = { 20, "Bob" };
	std::cout << p2.first << std::endl;
	std::cout << p2.second << std::endl;

	//3. Direct constructor initialization
	std::pair<int, std::string> p3(30, "Charlie");
	std::cout << p3.first << std::endl;
	std::cout << p3.second << std::endl;

	//4. Using std::make_pair() - the compiler infers both types automatically.
	auto p4 = std::make_pair(40, "David");
	std::cout << p4.first << std::endl;
	std::cout << p4.second << std::endl;

	exampleTwo();

	//exampleThree(); -> Disabled! structured bindings require C++17 or later.
	
	exampleFour();

}

//Example 2 definition
//A pair exposes exactly two public data members that can be read or written
//directly through the dot (.) operator:
//
//-.first : refers to the first element
//- . second : refers to the second element
void exampleTwo() {

	std::pair<std::string, double> product = { "Laptop,", 999.99 };

	std::cout << "\n" << product.first << " costs $" << product.second << std::endl;

	//Updating a value directly through . second
	product.second == 899.99; //Price drop!
	std::cout << "\n" << product.first << " costs $" << product.second << std::endl;
}

//Example 3 definition
//Structured bindings let you unpack a pair's members into individually named
//variables in a single line, avoiding repeated use of . first and .second.

//void exampleThree()

//std::pair<std::string, double> product = {"Laptop", 999.99}

//std::cout<< "\n << product.first << " costs $" product.second << std::endl;

//auto [name, price] = product;

//std::cout << name << " costs " << price;
// 
//} Note: Structured bindings are a C++17 feature and will not compile under C++14.

//Example 4 definition
//Lexicographic comparison works in two steps:
//1. The .first elements of both pairs are compared.
//2. Only when .first is equal does the comparison fall through to .second
void exampleFour() {

	std::pair<int, int> pair1 = { 5,10 };
	std::pair<int, int> pair2 = { 1,10 };
	std::pair<int, int> pair3 = { 2,1 };

	//pair1>pair2 is TRUE because 5>1 (the .second values are never checked.
	//pair2<pair3 is TRUE because 1<2 (again, .second is irrelevant here)
	if (pair1 > pair2) {

		std::cout << "First pair is greater than the second" << std::endl;

	}
	else {

		std::cout << "Second pair is greater than the first " << std::endl;
	}

	if (pair2 > pair3) {

		std::cout << "Second pair is greater than the third" << std::endl;

	}

	else {

		//pair3 wins outright on.first alone (2>1), so .second is never consulted
		std::cout << "Third pair is greater than the Second." << std::endl;
	}

	//This predictable sorting behavior makes pairs a natural fit for ordered STL
	//containders such as std::set and std::map, or a sorted std::vector.
}

//Common Utilitiy Functions

//std::make_pair()
//	Constructs a pair without requireing you to spell out the types explicitly.
//	Example: auto p = std::make_pair(1, 'A');

//swap()
//	Exchanges the contents of two pairs that share the same type signature.
//	Example: pair1.swap(pair2);

// std::get<>()
//	An index-based (or type-based) alternative to .first / .second.
//	Example:std::get<0>(myPair) //equivalent to myPair.first