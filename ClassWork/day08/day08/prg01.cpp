//Function with no argument and no return type

#include<iostream>
using namespace std;

void display(void);//declaration part 

int main()
{
	int ch;
	display();
	cin >> ch;
	switch (ch)
	{
	dafault:
		cout << "Wrong choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
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