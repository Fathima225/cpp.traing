#include<iostream>
using namespace std;

class Student {
protected:
	int rollNo;
	string name;
	int age;
public:
	Student(int rollNo, string name, int age)
	{
		this->rollNo = rollNo;
		this->name = name;
		this->age = age;
	}
	void displayA()
	{
		cout << "Student Info:" << endl;
		cout << "Enter Roll No :" <<rollNo<< endl;
		cout << "Enter Name :" << name << endl;
		cout << "Enter Age :" << age << endl;
	}
};

class Marks:public Student {
protected:
	int sub1;
	int sub2;
	int sub3;
public:
	Marks(int rollNo, string name, int age, int sub1, int sub2, int sub3) :Student(rollNo, name, age) {
		this->sub1 = sub1;
		this->sub2 = sub2;
		this->sub3 = sub3;
	}
	int calculate()
	{
		int totalmarks = sub1 + sub2 + sub3;
		cout << "Total Marks :" << totalmarks << endl;
		float avgmarks = totalmarks / 3;
		cout << "Average Marks :" << avgmarks << endl;

		return avgmarks;
	}
	void displayB() {
		 displayA();
		 cout << endl;
		
		 cout << "Full Result :" << endl;
		 calculate();
		 
	}
};

int main()
{
	Marks M(101, "suvetha", 22, 80, 70, 80);
	M.displayB();


}