#include<iostream>
using namespace std;


int main() {
	int arr[5];
	int n;
	


	cout << "Enter 5 integers:" << endl;
	
	cin >>n;

	for (int iv = 0;iv < 5;iv++) {
		cout << "arr[" << iv << "] = " << arr[iv] << endl;


		if (arr[iv] == n) {
			cout << "given number is present here";
		}
		else {
			cout << "Enter the correct number";
		}
	}
	return 0;
}