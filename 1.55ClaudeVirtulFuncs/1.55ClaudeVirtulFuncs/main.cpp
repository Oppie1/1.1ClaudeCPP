#include <iostream>
using namespace std;

//Tutorial - Virtual functions. 
//A virtual function is a member function declared within a base class that can be redefined
//(overriden) by a derived class to achieve runtime polymorphism.

//Base class: Enemy
//All enemy types inherit from this class and can override its members.
class Enemy {
public:
	//The 'virtual' keyword tells C++ to use polymorphic dispatch for this function.
	//If a derived class does not override attack(), this base class version acts
	//as the fallback and will be called instead.
	virtual void attack() {
		cout << "I am the default attack when there is no attack for given object.\n" << endl;
	}
};

//Derived class: Ninja inherits from Enemy.
//Because Ninja does not override attack(), calling attack() on a Ninja object will fall
//back to the virtual implementation defined in Enemy.
class Ninja : public Enemy {
public:
	//attack() is commented our to demonstrate virtual function fallback behavior.
	// //Uncomment it to see Ninja's own attack() override the  base class version instead.
	// 
	// void attack(){
	// cout<<"Ninja attack!" <<endl;
	//

};
//Derived class: Monster inherits from Enemy
//Monster provides its own attack() override, so the base class version is never called.
class Monster : public Enemy {
public:
	void attack() {
		cout << "Monster attack! " << endl;
	}
};

int main() {
	Ninja n;
	Monster m;

	//Base class pointers are used here to demonstrate runtime polymorphism.
	//Even though the pointer type is Enemy*, C++ will call the correct attack()
	//for each object at runtime, based on the actual derived type.
	Enemy* enemy1 = &n;//Points to a Ninja object
	Enemy* enemy2 = &m;//Points to a Monster object.

	//enemy1 calls Enemy::attack() (fallback) because Ninja has no override.
	//enemy2 calls Monster::attack() becuase Monster provides its own override.
	enemy1->attack();
	enemy2->attack();
}