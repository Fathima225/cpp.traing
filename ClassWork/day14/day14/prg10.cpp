//find the sum of n natural numbers:

#include<iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	cout << "enter the numbers" << endl;
	cin >>n;
	for (int i = 0;i <= n;i++) {
		sum+= i;
	}
	cout << " sum = " << sum << endl;
	return 0;
}
