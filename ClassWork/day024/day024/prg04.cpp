#include<iostream>
using namespace std;

typedef struct Employee {
	int id;
	string name;
}EMP;

int main()
{
	int* ptr = (int*)malloc(sizeof(int));
	*ptr = 10;

	int* p = new int(10);

	cout << *ptr << "\t" << *p << endl;
	cout << "sizeof(ptr)" << sizeof(*ptr) << endl;
	cout << "sizeof(p)" << sizeof(*p) << endl;


	EMP* e = new EMP[10];
	EMP* e1 = new EMP{ 101,"bhima" };
	cout << e1->id << "\t" << e1->name << endl;

	delete e1;
	delete [] e;
	return 0;

	
}