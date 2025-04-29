#include<iostream>
using namespace std;


int main() {
	int arr[5];

	
	cout << "Enter 5 integers:" << endl;
	cin >> arr[0] >>arr[1] >>arr[2]>>arr[3]>>arr[4];
	
	for (int iv = 0;iv < 5;iv++)
		cout << "arr[" << iv << "] = " << arr[iv] << endl;

	return 0;
}