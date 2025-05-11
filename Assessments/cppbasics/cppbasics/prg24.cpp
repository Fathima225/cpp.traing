//24.Write a Program to Calculate the Sum of Elements in an Array.

#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 10,20,30,40,50 };
	int sum = 0;
	int n = sizeof(arr) / sizeof(arr[0]);


	for (int i = 0;i < n;i++) {
		sum += arr[i];
	}
	cout << sum << endl;
	return 0;
}