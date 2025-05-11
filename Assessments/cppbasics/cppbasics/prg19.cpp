//19.Write a Program to Find the Nth Term of the Fibonacci Series

#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	int first = 0;
	int second = 1;
	int nth;

	for (int i = 3;i <= num;i++) {
		nth = first + second;
		first = second;
		second = nth;


	}
	cout << nth << endl;
	return 0;
}

