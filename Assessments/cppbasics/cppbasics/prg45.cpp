//45.Write a Program to Find the Maximum and Minimum of the Two Numbers Without Using the Comparison Operator.
#include<iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	int max = (n1 + n2 + abs(n1 - n2)) / 2;
	int min = (n1 + n2 - abs(n1 - n2)) / 2;
	cout << "maximum_" << max << endl;
	cout << "minimum_" << min << endl;
	return 0;

}