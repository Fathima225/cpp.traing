//21.Write a Program to Calculate the Lowest Common Multiple (LCM) of Two Numbers.

#include<iostream>
using namespace std;
int main()
{
	int n1, n2,gcd=0;
	cin >> n1 >> n2;
	int a = n1, b = n2;
	int remainder = 0;

	while (b != 0) {
		remainder = a % b;
		a = b;
		b = remainder;

	}gcd = a;
	int lcm = (n1 * n2) / gcd;
	cout << lcm << endl;

	return 0;
 }