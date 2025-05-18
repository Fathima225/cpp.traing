#include<iostream>
using namespace std;

void display(const char[]);

int main()
{
	char s[] = "bhima";
	display("fathima");
	return 0;
}

void display(const char name[])
{
	while (*name!= '\0')
		cout << *name++;
	cout << endl;
}