#include<iostream>
using namespace std;

void convertHours(int hours)
{
	int minutes = hours * 60;
	int seconds = minutes * 60;

	cout << hours  << " hour is equal to " << minutes << " minutes and " << seconds << " seconds " << endl;
}

int main() {
	int hours;
	cout << "Enter the hours:" << endl;
	cin >> hours;

	convertHours(hours);

	return 0;
}