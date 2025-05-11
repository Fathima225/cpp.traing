//6.Write a Program to Print Check Whether a Character is an Alphabet or Not.

#include<iostream>
using namespace std;

int main()
{
	char ch;
	cin >> ch;
	if ((ch >= 'a' && ch <= 'z')||(ch>='A'&&ch<='Z')) {
		cout << ch << " is alphabet" << endl;
	}
	else {
		cout << " is not alphabet" << endl;
	}
}