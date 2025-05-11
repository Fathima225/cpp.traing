//16.Write a Program to Find a Leap Year or Not.
#include<iostream>
using namespace std;

int main()
{
	int num;
	cout << "enter year" << endl;
	cin >> num;

	if ((num % 4 == 0&& num % 100 != 0)||(num % 400 == 0)) {
		cout<<"is leap year";
	}
	else {
		cout<<"not leap year";
	}

}