#include<iostream>

bool isPrime(int);
using namespace std;

int main()
{
	int num;
	cout << "Enter thr number:";
	cin >> num;
	bool ret = isPrime(num);
	if (ret == true)
		cout << "Given number :" << num << "is a prime number" << endl;
	else
		cout << "Given number :" << num << "is a not a prime number" << endl;
	return 0;

}



