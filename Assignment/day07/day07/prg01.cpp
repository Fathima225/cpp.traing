#include<iostream>
using namespace std;

int main()
{
	int num = 1012;
	int r, prod = 1, sum = 0;
	
	while (num) {
		r = num % 10;
		sum += r;
		if (r != 0)
		{
			prod *= r;
		}
		num /= 10;
	}
	cout << "sum=" << sum << "prod=" << prod << endl;
	
	
	
	return 0;
}