#include<iostream>
using namespace std;
// Inheritance 


// Making Abstract class 

class AbstractEmployee{

	// making contract 
	// we can force to sign contrct by using pure virtual fuction 
	virtual void AskFor()=0; //this is pure virtual function 
};


class Employee:AbstractEmployee{
private:
	string Company;
	int Age;
// properties

protected:
	string Name;
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
			cout << Name << " Got promoted" << endl;
		}
		else{

			cout << Name << " Sry no promotion for you " << endl;
		}
	}
};



class Developer:public Employee{
public:
	string FavProgLang;
	Developer(string name, string comp, int age, string lang):Employee(name,comp,age){
		FavProgLang = lang;
	}
	void FixBug(){
		cout << Name <<"Fix Bug using " << FavProgLang << endl;
	}
};


// making a new class
class Teacher:public Employee{
public:
	string Subject;
	void PreLesson(){
		cout << Name << "is preparing " << Subject << "Lesson" << endl;
	}
	// making a constructor 

	Teacher(string name, string comp, int age, string sub):Employee(name,comp,age){
		Subject = sub;
	}
};



/*

Inheritance are certain properties that allow to access properties from parent class 

Symbol use to show inheritance -->  " recent class : base class  "


*/

int main(){
	Employee em1 = Employee("Arka", "self", 21); 
	

	Employee emp2 = Employee("Abhis", "Freelancer" ,18);

	// em1.setAge(22);


	// em1.AskFor();
	// emp2.AskFor();

	Developer dev = Developer("Arka", "CodeYT", 21, "C++");
	dev.FixBug();
	dev.AskFor();


	Teacher t = ("Solo","cool",34,"Mathematics");
	t.PreLesson();
	return 0;
}
