//23.Write a Program to Find the Second Smallest Element in an Array.

#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 10,20,30,40,50 };
	int t;
	int n = sizeof (arr) / sizeof (arr[0]);

	

	for (int i = 0;i < n;i++) 
	{
		for (int j = 0;j < n;j++) 
		{
			if (arr[j] < arr[j + 1]) {
				t = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = t;
			}
			

		}
	}

	cout << arr[n - 2] << endl;

	return 0;
}
