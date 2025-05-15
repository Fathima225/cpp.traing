#include<iostream>
using namespace std;
int main()
{
	int* ptr = nullptr;
	int a = 10;
	//cout << a << ptr << &a << &ptr << endl;
	ptr = &a;
	cout << ptr << endl;
	//cout << *ptr << endl;
	//*ptr = 20;
	//cout << *ptr << endl;

	return 0;
}