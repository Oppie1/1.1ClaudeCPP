#pragma once

class Claudia
{
public:

	//Default construtor: automatically called when a Claudia object is created
	//It initializes the object even if no arguments are passed.
	Claudia();

	//A regular (non-const) member function. It can modify the object's data members and can only be called on non-const objects.
	void normalObject();

	//A const member function. The 'const' after the parentheses promises that this function will NOT modify any data members of the 
	//object. Because of this guarantee, it is the ONLY kind of member functionthat a const object is allowed to call.
	void constantObject()const;


protected:
private:

};

//Key point: Data members are variables inside the class. For example:

//class BankAccount{
//private:
// double balence; //This is a data member
// public:
// double getBalence() const; //const function
// void withdraw(double amount);//non-constt function
// 
// getBalence() is const because it only reads the balance - it doesn't change it.
// withdraw() is non-const because it modifies the balance - it decreases it.
// 
// Why use const member functions?
// 1. Safty and intenet - When you write const, you're making a promise: "This function is read-only. It wont mess with my data.
// Other programers (or you six months from now) know it's safe to call.
// 2. Const objects require them - A const object can only call const functions. So if you have a const BankAccount, you can call 
// getValence() but NOT withdraw.
// 3. Pass by const reference - This is the real power:
// 
// void printAccount(const BankAccount& account){
// cout<<account.getBalence(): //Ok: getBalence is const
// account.withdraw(50); Error: withdraw() is non-constant
//