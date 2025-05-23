#include<iostream>
using namespace std;

class Employee {
public:
	int e_id;
	string e_name;
};

int main()
{
	Employee e;
	e.e_id = 101;
	e.e_name="fathima";
	Employee* ptr = &e;
	cout << e.e_id << "\t" << e.e_name << endl;
	ptr->e_id = 201;
	cout << e.e_id << "\t" << e.e_name << endl;
		return 0;
}