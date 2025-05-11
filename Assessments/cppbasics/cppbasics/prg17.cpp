//17.Write a Program to Check Palindrome.
#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int o_num = num;
	int reverse_num = 0;
	int remainder;


	while (num != 0) {
		remainder = num % 10;
		reverse_num = reverse_num * 10 + remainder;
		num /= 10;
	}
	if (o_num == reverse_num) {
		cout << o_num << " is palindrome" << endl;
	}
	else {
		cout << o_num << " is not palindrome" << endl;
	}


	return 0;
}