#include<iostream>
#include<cstring>
using namespace std;

typedef struct EMployee {
	int id;
	char name[20];
}EMP;
int main()
{
	EMP e;
	cout << sizeof(e) << endl;
	e.id = 101;
	cout << e.id << endl;
	strcpy(e.name, "bhima");
	return 0;

}