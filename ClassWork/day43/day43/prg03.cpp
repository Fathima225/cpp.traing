#include<iostream>
#include<vector>
#include<fstream>
#include<iterator>
#include<algorithm>
using namespace std;

class Employee {
protected:
	int id;
	string name;
public:
	Employee(int id, string name) :id(id), name(name){}
	void display () const
	{
		cout << "ID :" << id << endl;
		cout << "Name :" << name << endl;
	}
	int getId() const
	{
		return id;
	}
	string getName() const
	{
		return name;
	}
	void setId(int id)
	{
		this->id = id;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setValues()
	{
		cin >> id >> name;
	}
	friend istream& operator >>(istream& is, Employee& e)
	{
		is >> e.id >> e.name;
		return is;
	}

	friend ostream& operator <<(ostream& os, Employee& e)
	{
		os << "ID: " << e.id << "\tName: " << e.name << endl;
		return os;
	}
};
int main()
{
	int id;
	string name;

	istream_iterator<Employee> inIt(std::cin);
	istream_iterator<Employee> endIt;

	vector<Employee>emp(inIt, endIt);
	while (inIt != endIt)
	{
		emp.push_back(*inIt);
		++inIt;
	}

	for (auto e : emp)
		cout << e;


	return 0;

}