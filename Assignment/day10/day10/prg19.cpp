#include<iostream>
using namespace std;


int main() {
	int n;
	cout << "Enter the countdown starting number:" << endl;
	cin >> n;


	while (n > 0) {
		cout << n << "Seconds remaining....." << endl;
		--n;


		cout << "Liftoff" << endl;
		return 0;
	}
}