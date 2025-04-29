#include<iostream>
using namespace std;

int secondLastDigit(int n) {
	int lastDigit = 0;
	while (n > 0) {
		lastDigit += n % 10;
		n /= 10;
	}
	if (n >= 10) {
		return secondLastDigit(lastDigit);
	}
	else {
		return lastDigit;
	}
}
int main() {
	int num;
	cout << "Enter the two digit  number:" << endl;
	cin >> num;
	int result = secondLastDigit(num);
		cout << result;
		return  0;
			
}