//Function with no argument and  return type

#include<iostream>
using namespace std;

void display(void);//declaration part 
void sumIntegers(int, int);

int main()
{
	/*int ch;
	display();
	cin >> ch;*/
	switch (displayRet())
	{
	dafault:
		cout << "Wrong choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
		sumIntegers(10, 20);
		break;
	case 2:
		cout << "Substraction" << endl;
		break;
	case 3:
		cout << "Exiting the application" << endl;
		break;
	}
	return 0;
}

void display()
{
	cout << "press," << endl;
	cout << "1.Addition" << endl;
	cout << "2.Substraction" << endl;
	cout << "3.Exit" << endl;
	cout << "Choice:";
}
int displayRet()
{
	int(ch);
	cout << "press," << endl;
	cout << "1.Addition" << endl;
	cout << "2.Substraction" << endl;
	cout << "3.Exit" << endl;
	cout << "Choice:";
}


void sumIntegers(int v1, int v2)
{
	cout << v1 << "+" << v2 << "=" << (v1 + v2) << endl;
}