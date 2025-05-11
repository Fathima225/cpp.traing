//16.Write a Program to Check the Prime Number


#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num == 2) {
		cout << "prime" << endl;
	}
	else if (num == 0 || num == 1)
	{
		cout << "neither prime nor composite" << endl;
	}

	for (int i = 2;i * i <= num;i++)
	{
		if (num % i == 0) {
			cout << "not prime";
			return 0;
		}
	}cout << "prime";
}