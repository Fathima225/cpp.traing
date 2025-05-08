#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "enter the chrecter" << endl;
	cin >> ch;
	char s1 = 'a', s2 = 'A';
	char e1 = s1 + 25, e2 = s2 + 25;
	if (((ch >= s1) && (ch <= e1) || (ch >= s2) && (ch <= e2)))
	{
		cout << " it is alphabet " << endl;
	}
	else {
		cout<<"Enter alphabet"
	}
	return 0;


}