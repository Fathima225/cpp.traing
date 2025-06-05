#include<iostream>
#include<list>
#include<algorithm>
using namespace std;




class Employee {
private:
	int id;
	string name;
public:
	Employee(int id, string name) :id(id), name(name){}
	void display()
	{
		cout << "ID :" << id << endl;
		cout << "Name :" << name << endl;
	}
	bool operator==(const Employee& other)const

	{
		return id ==other.id;
	}
	bool operator<(const Employee& other)const

	{
		return id < other.id;
	}
	};
void mySort(list<Employee>& emp)
{
	for (auto& i : emp)
	{
		for (auto& j : emp)
		{
			if (i < j) {
				Employee t = i;
				i = j;
				j = t;
			}
		}
	}
}
int main()
{
	std::list<Employee>emp;
	Employee e1(101, "fathima");
	Employee e2(102, "manu");
	Employee e3(103, "swetha");
	Employee e4(104, "abu");
	Employee e5(105, "lavanya");

	emp.push_back(e1);
	emp.push_front(e2);
	emp.emplace_back(e3);
	emp.emplace_front(e4);
	emp.insert(emp.begin(), e5);
	
	

	for (auto i : emp){
		i.display();
	}
	cout <<"================================================"<< endl;
	emp.reverse();
	for (auto i : emp) {
		i.display();
	}
	cout << "=================================================" << endl;
	emp.remove(e4);
	for (auto i : emp) {
		i.display();
	}

	return 0;
}