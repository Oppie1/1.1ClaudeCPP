#include <iostream>
using namespace std;


//An abstract class is any class that contains at least one pure virtual function. Pure virtual functions act as a contract,
//forcing every derived class to provide its own implementation. If a derived class fails to do so, it also becomes abstract
//and cannot be instantiated.

class Enemy {
public:
	//A pure virtual function is declared by assigning "=0" at the end of its signature. It has no implementation
	//in the base class and serves as a blueprint, requiring all derived classes to override it with their own
	//version of attack().
	virtual void attack() = 0;
};

//Ninja derives from Enemy and provides its own attack() implementation, satisfying the pure virtual function contract
//se by the base class.
class Ninja : public Enemy {
public:
	//Overrides the pure virtual attack() from Enemy. The Ninja object can now be instantiated.
	void attack() {
		cout << "Ninja attack!" << endl;
	}
};

//Monster derives from Enemy and provides its own attack() implementation, satisfying the pure virtual function contract 
//set by the base class.
class Monster : public Enemy {
public:
	//Overrides the pure virtual attack() from Enemy. The Monster object can now be instantiated.
	void attack() {
		cout << "I am monster attack!" << endl;
	}
};

//Orc derives from Enemy but does NOT override attack(), so it inherits the pure virtual function unchanged.
//This makes Orc abstract as well, meaning it cannot be instantiated.
class Orc : public Enemy {

	//***Try uncommenting this line out and see what happens.
	// By providing an attack() override, Orc is no longer be abstract and the program will compile.
	// 
	//void attack() {
	//	cout << "I am orc attack! If I were commented out the program will NOT run (gets error)." << endl;
	//}
};

int main() {
	//Valid: Ninja overrides attack(), so it is not abstract and can be instantiated.
	Ninja n;
	//Valid: Monster overrides attack(), so it is not abstract and can be instantiated.
	Monster m;
	Orc o; //ERROR: Orc does not override attack(), making it abstract. Instantiation fails.

	//Base class pointers are used here to demonstrate polymorphism.Each Enemy* pointer holds the address of a 
	//derived class object and will call that object's overridden attack() at runtime.
	Enemy* enemy1 = &n;//Points to the Ninja object.
	Enemy* enemy2 = &m;//Points to the Monster object.
	Enemy* enemy3 = &o;//Points to the Orc object - but Orc is abstract, so this also fails.

	enemy1->attack();//Calls Ninja::attack() - works correctly
	enemy2->attack();//Calls Monster::attack() - works correctly
	enemy3->attack();//Calls Orc::attack() - fails, as Orc has no valid attack() implementation.
}