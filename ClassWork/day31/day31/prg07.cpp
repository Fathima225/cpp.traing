#include<iostream>
using namespace std;

class Person {
private:
	int ssn;

protected:
	string name;
	string gender;
	int age;
public:
	Person(string name, int ssn, string gender, int age) {
		this->name = name;
		this->ssn = ssn;
		this->gender = gender;
		this->age = age;

	}
	void displayA()
	{
		cout << "name :" << name << " |ssn :" << ssn << " |gender :" << gender << " |age :" << age << endl;
	}
};

class Employee:public Person {
private:
	int id;
	int salary;
	string designation;
public:
	Employee(string name, int ssn, string gender, int age, int id, int salary, string designation) :Person(name, ssn, gender, age) {
		this->id = id;
		this->salary = salary;
		this->designation = designation;
	}
	void displayB()
	{
		cout << "id :" << id << " |salary :" << salary << " |designation :" << designation << endl;
	}
	void setName(string n) {
		name = n;
	}
		string getName()
		{
			return name;
		}
	
};

int main()
{
	Employee E("fathima",293954,"female",23,2244,30000,"software developer");
	E.displayA();
	E.displayB();
	E.setName("abi");
	E.displayA();
	E.displayB();



}