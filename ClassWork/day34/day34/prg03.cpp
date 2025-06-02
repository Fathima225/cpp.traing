#include<iostream>
#include<fstream>
#include<cstring>
#include<vector>
using namespace std;

class Employee {
protected:

	int emp_id;
	string emp_name;
	float emp_salary;
public:
	Employee(int emp_id, string emp_name, float emp_salary)
	{
		this->emp_id = emp_id;
		this->emp_name = emp_name;
		this->emp_salary = emp_salary;

	}
	void displayE()
	{
		cout << "ID :" << emp_id << endl;
		cout << " Name :" << emp_name << endl;
		cout<< " Salary :" << emp_salary << endl;
	}

};

int main()
{
	fstream fIo;
	Employee e(101, "fathima", 25000);
	fIo.open("Test1.txt", ios::in | ios::out | ios::binary);

	if (!fIo.is_open())
	{
		cerr << "Error: opening the file" << endl;
	}
	/*Employee e(101,"fathima",25000);
	e.displayE();
	return 0;*/

}