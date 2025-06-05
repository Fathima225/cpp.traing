#include<iostream>
#include<vector>
using namespace std;

class Student {
	int id;
	string name;
public:
	Student(int id,string name):id(id),name(name){}
	void display() {
		cout << "ID :" << id << endl;
		cout << "name :" << name << endl;
	}
};

int main()
{
	Student s[3] = { {101,"manu"},{102,"fathima"},{103,"bhima"}};
	Student s4 = { 104,"abc4" };
	Student s5 = { 105,"abc5" };
	Student s6 = { 106,"abc6" };
	try {
		for (auto e : s)
			e.display();

		vector <Student>emp;

		emp.push_back(s4);
		emp.push_back(s5);
		emp.push_back(s6);

		for (auto e : emp)
			e.display();


		cout << emp.capacity() << endl;
		cout << emp.size() << endl;

		emp.front().display();
		emp.back().display();

		emp.at(10).display();
	}
	catch (exception& e)
	{
		cout << "error :" << e.what() << endl;
	}

	return 0;

}