//44.Write a Program to Check for the Equality of Two Numbers Without Using Arithmetic or Comparison Operator

#include<iostream>
using namespace std;
bool isEqual(int a, int b) {
	return !(a ^ b);
}

int main()
{
	int x;
	int y;
	cout << "enter two numbers" << endl;
	cin >> x>> y;

	if (isEqual(x, y)) {
		cout << "number are equal" << endl;
	}
	else {
		cout << "number are not equal" << endl;
	}
	return 0;
}