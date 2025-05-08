#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "enter the value:" << endl;
	cin >> ch;
	cout << "ASCII is:" << (int)ch << endl;
	printf("%d", int(ch));
	
	/*if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout << ch << " this charecters are vowel " << endl;
	}
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	{
		cout << ch << " this charecters are vowel " << endl;
	}*/

	switch (ch)
	{

	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':cout << "vowel" << endl;
	break;


	}

	return 0;

	
}