#include<iostream>
using namespace std;

class Employee {
protected:
	int empId;
	string name;
public:
	Employee(int empId, string name)
	{
		this->empId = empId;
		this->name = name;
	}
	
};

class Developer:public Employee {
protected:
	int codingHours;
public:
	Developer(int empId, string name, int codingHours) :Employee(empId, name) {
		this->codingHours = codingHours;
	}

	
};

class Manager :public Employee {
protected:
	int teamSize;
public:
	Manager(int empId, string name, int teamSize) :Employee(empId, name) {
		this->teamSize = teamSize;
	}
	void displayE()
	{
		cout << "EmpId: " << empId << endl;
		cout << "Name: " << name << endl;
	}

};
class Techlead :public  Developer, Manager {
protected:
	int salary;
public:
	Techlead(int empId, string name, int codingHours, int teamSize,int salary) :Developer(empId, name, codingHours), Manager(empId, name, teamSize) {
		this->salary = salary;
	}
	int calculateSalary()
	{
		int codehour = salary * codingHours;
		cout << "Salary based on coding: " << codehour << endl;

		int cht = codehour + (teamSize*5000);
		cout << "Salary based on coding + team :" << cht << endl;
		return cht;
	}

	void display() {

		cout << "Tech Lead Info:" << endl;
	     displayE();
		cout << endl;
		calculateSalary();

	}

	

};

int main()
{
	Techlead T(501, "rajesh", 120, 5, 500 );
	T.display();
}