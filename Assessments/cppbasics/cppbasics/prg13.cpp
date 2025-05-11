//13.Write a Program to Find the Sum of the First N Natural Numbers.

#include<iostream>
using namespace std;

int main()
{
	int num;
	int sum = 0;
	cin >> num;

	for (int i = 0;i <= num;i++) {
		sum=sum+ i;
	}
	cout << sum;
	return 0;
}