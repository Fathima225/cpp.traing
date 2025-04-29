#include<iostream>
using namespace std;

int middelNumber(int a, int b, int c)
{
	if ((a > b && a < c) || (a<b && a>c))
	{
		return a;
	}
	else if ((b > a && b < c) || (b<a && b>c)) {
		return b;
	}
	else {
		return c;
	}
}

int main() {
	int num1, num2, num3;
	cout << "Enter three integers:" << endl;
	cin >> num1 >> num2 >> num3;
	int middel = middelNumber(num1, num2, num3);
	cout << "Middel number is:" << middel << endl;
	return 0;
}