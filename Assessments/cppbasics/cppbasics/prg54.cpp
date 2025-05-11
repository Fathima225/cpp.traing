//54.Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include<iostream>
using namespace std;

int main()
{
	float f, cel;
	cout << "enter temperature in fehrenheit: " << endl;
	cin >> f;
	cel = (f - 32) * 5.0 / 9.0;
	cout << "temperature in celcius:" << cel << endl;
	return 0;
}