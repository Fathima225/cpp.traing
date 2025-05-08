#include<iostream>
using namespace std;

//leap year: 

int main() {
	int year;
	cout << "Enter the year" << endl;
	cin >> year;
	if (year % 400==0){
		cout << "leap year" << endl;
	}
	else if ((year % 4 == 0 && year % 100 != 0)) {
		cout << "leap year" << endl;
	}
	else {
		cout << "not leap year" << endl;
	}
	return 0;
}