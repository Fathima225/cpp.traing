#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 20, c = 30;

	if (a > b) {
		cout << "a is greater" << endl;
	}
	else if (b > c) {
		cout << "b is greater" << endl;
	}
	else {
		cout << "c is greater" << endl;
	}
	return 0;
}