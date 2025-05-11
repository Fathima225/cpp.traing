//22.Write a Program to Find the Smallest and Largest Element in an Array.

#include<iostream>
using namespace std;

int main()
{
	
	int arr[] = { 10,20,30,40,50 };
	int smallest = arr[0];
	int largest = arr[0];
	

	for (int i = 1;i <5;i++) {
		
		if (arr[i]>largest) {
			largest = arr[i];

		}if (arr[i] < smallest) {
			smallest = arr[i];

		}
	}


	cout << smallest << " smallest element" << endl;
	cout << largest << " largest element" << endl;
	return 0;
}