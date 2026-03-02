#include <iostream>
using namespace std;

//This tutorial demonstrates polymorphism in C++. Polymorphism is the ability of objects
//from different classes to be treated uniform through a common base class interface.
//It enables code flexibility and reusability by allowing a single pointer or reference
//to work with multiple derived types

//Enemy is the base class that defines common functionality for all enemy types.

class Enemy {
	
protected:
	//Protected members are accessible by derived classes (Ninja and Monster).
	//This allows derived classes to use attackPower while keeping it hidden from external code.
	int attackPower;

public:
	//Sets the attack power value for any Enemy object
	//This method is inherited by all derived classes.
	void setAttackPower(int a) {
		attackPower = a;
	}
};

//Ninja is a derived class that inherits from Enemy.
//It has access to all public and protected members of the Enemy base class.
class Ninja : public Enemy {
public:
	//Displays a ninja-specific attack message using the inherited attackPower value.
	void attack() {
		cout << "I am a ninja, ninja chop! - " << attackPower << endl;
	}
};
//Monster is another derived class that inherits from Enemy. Like Ninja, it can
//access Enemy's public and protected members.
class Monster : public Enemy {
//Displays a monster-specific attack message using the inherited attackPower value.
public:
	void attack()
	{
		cout << "\nMonster must eat you!!! " << attackPower << endl;
	}
};

int main() {
	//Create a Ninja object.
	Ninja n;
	//Create a Monster object.
	Monster m;

	//***PolyMorphism In Action***
	//Here we use base class pointers (Enemy*) to point to derived class objects.
	//This is Polymorphism. a single pointer type (Enemy*) can reference different 
	//derived types (Ninja or Monster)

	//enemy1 is an Enemy pointer that points to a Ninja object
	Enemy* enemy1 = &n;
	//enemy2 is an Enemy pointer that points to a Ninja object
	Enemy* enemy2 = &m;

	//***Polymorphism Continues***
	//Through the base class pointer, we can call methods defined in the base class
	//enemy1 points to a Ninja, but we access it though the Enemy interface.
	enemy1->setAttackPower(29);

	//enemy2 points to a Monster, but we also access it through the Enemy interface.
	//Both pointers use the sam method call syntax, demonstrating uniform treatment
	enemy2->setAttackPower(99);

	//Call the attack() method directly on the derived class objects.
	//Each derived class has its own implementation of attack(), producing different output.
	n.attack();//Outputs: "I am a ninja, ninja chop! - 29"
	m.attack();//Outputs:" Monster must eat you!!! 99"
}