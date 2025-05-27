#include<iostream>
#include<string>
#define MAX 5
using namespace std;


class Employee {
private:
	int id;
	string name;
public:

	void setId(int eid) {
		id = eid;
	}
	int getId()
	{
		return id;
	}

	void setName(string n)
	{
		name = n;
}
	string getName()
	{
		return name;
	}
	/*Employee(int eid, string n)
	{
		id = eid;
		name = n;
	}*/
	void display()
	{
		cout << "id :" << id << " name : " << name << endl;
	}
};

class Stack {
private:
	int top;
	Employee arr[MAX];
public:
	Stack() {
		top = -1;
	}

	bool push(Employee& emp) {
		if (top == MAX - 1) {
			cout << "Stack is full" << endl;
			return false;
		}
		arr[++top]=emp;
		cout << "Employee added succesfully." << endl;
		return true;
	}
	bool pop() {
		if (top == -1) {
			cout << "stack is empty" << endl;
			return false;
		}
		top--;
		arr[top].display();
		return true;
	}
	void display() {
		if (top == -1) {
			cout << "stack is empty" << endl;
			return;
		}
		cout << "Employee list" << endl;
		for (int i = top;i >= 0;i--) {
			arr[i].display();
		}

	}


};

int main()
{
	Stack s;
	Employee e, e1,e2,e3,e4;
	
	e1.setId(101);
	e1.setName("abu");
	s.push(e1);
	e2.setId(102);
	e2.setName("manu");
	s.push(e2);
	e3.setId(103);
	e3.setName("fathima");
	s.push(e3);
	e4.setId(104);
	e4.setName("suvetha");
	s.push(e4);
	cout << "current stack" << endl;


	s.pop();
	cout << "get deleted";
	s.display();

	return 0;
}

