#include<iostream>
using namespace std;

int main() {
	int num,rev=0,r,original;
	
	
	
	cout << "Enter the number:";
	cin >> num;
	
	original = num;
	while (num) {
		r = num % 10;
		rev = rev * 10 + r;
		num = num / 10;
	}
	cout << rev;
	if (original == rev) {
		cout << "palindrome" << endl;
	}
	else {
		cout << "no palindrome" << endl;
	}
	return 0;
}