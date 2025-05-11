//14.Write a Program to Find the Factorial of a Number Using Loops.

#include<iostream>
using namespace std;

int main()
{
	int num;
	int prd=1;
	cin >> num;

	for (int i = 1;i <= num;i++) {
		prd = prd * i;
	}
	cout << prd;
	return 0;
}