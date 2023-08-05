#include<iostream>
using namespace std;
// Encapsulations

class Employee{
private:
	string Name;
	string Company;
	int Age;
// properties
public:
	// To set private data accesable use get and set method 

	void setName(string name){
		Name = name;
	}
	string getNmae(){
		return Name;
	}

	void setCOmpany(string comp){
		Company = comp;
	}

	string getCompany(){
		return Company;
	}

	void setAge(int age){
		
		// Give a validation Rule
		if(Age >= 20)
		Age = age;
	}

	int getAge(){
		return Age;
	}


	void Intro(){
		cout << "Name ->" << Name << endl;
		cout << "Company ->" << Company << endl;
		cout << "Age ->" << Age << endl;
	}
	Employee(string name, string comp, int age){
		Name = name;
		Company = comp;
		Age = age;
	}
};
/*
Encapsulation is a idea to CAT data from same class and other class and mod it

In the first step to setup our setup meterial as private the to Encapsulation it 

*/

int main(){
	Employee em1 = Employee("Arka", "self", 21); 
	em1.Intro();

	Employee emp2 = Employee("Abhis", "Freelancer" ,21);
	emp2.Intro();


	em1.setAge(22);
	cout << em1.getNmae() << "is" << em1.getAge() << "years old" << endl;
	return 0;
}
