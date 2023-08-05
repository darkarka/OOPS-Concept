#include<iostream>
using namespace std;

class Employee{
public:
	string Name;
	string Company;
	int Age;


	void Intro(){
		cout << "Name ->" << Name << endl;
		cout << "Company ->" << Company << endl;
		cout << "Age ->" << Age << endl;
	}
};


int main(){
	Employee em1;
	em1.Name = "Arka";
	em1.Company = "self";
	em1.Age = 21;
	em1.Intro();

	Employee em2;
	em2.Name = "Lamda";
	em2.Company = "YT";
	em2.Age = 42;
	em2.Intro();

	return 0;
}

/*
Type of access Modifer --

1. puclic   --> Can access by own class and main function too
2. private --> Can only access by the class ,, Initially c++ class are private in nature 
3. provided

*/


// what is class Method :

/*
Making function inside the class is known as Class Method 

*/



// What is Constructors:

/*
 
Constructor is a method to take input in the class from main

*/


// waht is default constructor ?

/*
 
	Type of constructor created by compiler if no input given

*/

// Rules of Constructors:

/*
 There are 3 main rule in it: 

 1.Constructor don't have return type 
 2.

*/


// Encapsulation 

/*
There are four piler of OOPS

1. Encapsulation
2. Abstraction
3. Inheritance 
4. Polymorphism

*/