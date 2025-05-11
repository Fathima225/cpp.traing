//20.Write a Program to Calculate the Greatest Common Divisor of Two Numbers.

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int remainder = 0;

	while (b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;


	}
	cout << a << endl;

	return 0;

}