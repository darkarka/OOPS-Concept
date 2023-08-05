#include<iostream>
using namespace std;
// Abstraction


// Making Abstract class 

class AbstractEmployee{

	// making contract 
	// we can force to sign contrct by using pure virtual fuction 
	virtual void AskFor()=0; //this is pure virtual function 
};

class Employee:AbstractEmployee{
private:
	string Name;
	string Company;
	int Age;
// properties
public:
	
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

	void AskFor(){
		if(Age > 20){
			cout << Name << "Got promoted" << endl;
		}
		else{

			cout << Name << "Sry no promotion for you " << endl;
		}
	}
};
/*

Abstraction is a way to hide the backend of a use code app.
Abstractions are just making contract to other

using abstact classes we can do abstcution or contract 


*/

int main(){
	Employee em1 = Employee("Arka", "self", 21); 
	

	Employee emp2 = Employee("Abhis", "Freelancer" ,18);
	


	em1.setAge(22);


	em1.AskFor();
	emp2.AskFor();

	return 0;
}
