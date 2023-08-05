#include<iostream>
using namespace std;

// Introduction of Contructor -->

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
// This is my own constructors
	Employee(string name, string comp, int age){
		// Include the properties 
		Name = name;
		Company = comp;
		Age = age;
	}

	// After create own constructor defualt const. is vancied 


};


/*

Constructor Rules :

1. Don't have return type 

2. Const. have same as the class it belong


3. Constuctor must be public ** ITs only mandatory in basic level **


*/



int main(){
	
	Employee em1 = Employee("Arka", "self", 21);  //Enter the argument list == parameters :

	em1.Intro();
	Employee emp2 = Employee("Abhis", "Freelancer" ,21);
	emp2.Intro();


	// Employee em1;
	// em1.Name = "Arka";
	// em1.Company = "self";
	// em1.Age = 21;
	// em1.Intro();

	// Employee em2;
	// em2.Name = "Lamda";
	// em2.Company = "YT";
	// em2.Age = 42;
	// em2.Intro();

	return 0;
}
