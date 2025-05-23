//parameterized constructure.

#include<iostream>
using namespace std;

class Employee {
private:
	int e_id;
	string e_name;

public:
	Employee()
	{
		cout << "Default constructure called" << endl;

	}
	Employee(int id, string name)
	{
		cout << "parameterized constructure" << endl;
		e_id = id;
		e_name = name;
	}
	void disp();

	{
		cout << "display functio called" << endl;
		cout << e_id << "\t" << e_name << endl;
	}
};

int main()
{
	//default const is getting called
	Employee e;
	e.disp();

	//para const is getting called
	Employee e1(101, "abc");
	e1.disp();

	//default copy const is getting called
	Employee e2(e1);
	e2.disp();

	//default 
	Employee e3 = e1;
	e3.disp();
		;
	return 0;
}