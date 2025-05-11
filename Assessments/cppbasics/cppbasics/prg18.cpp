//18.Write a Program to Check Whether a Number is an Armstrong Number or Not.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int temp, o_num, num, digit, sum = 0;
	int count = 0;

	cout << "enter a number:";
	cin >> num;

	o_num = num;
	temp = num;
	while (temp > 0)
	{
		temp = temp / 10;
		count++;

	}
	temp = num;
	while (temp > 0)
	{
		digit = temp % 10;
		sum += pow(digit, count);
		temp = temp / 10;
	}
	if (sum == o_num)
	{
		cout << "armstrong" << endl;
	}
	else
	{
		cout << "not armstrong" << endl;
	}


	return 0;

}