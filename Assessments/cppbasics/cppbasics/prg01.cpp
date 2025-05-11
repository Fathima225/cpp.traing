//1.Write a C++ Program to Check Whether a Number is a Positive or Negative Number:
#include<iostream>
using namespace std;

int main()
{
	int num=0;
	cin >> num;
	if (num < 0) {
		cout << num << " is negative" << endl;
	}
	else if (num > 0) {
		cout << num << " is positive" << endl;
	}
	else  {
		cout << num << " is zero" << endl;
	}

}