//7.Write a Program to Find the Length of the String Without using strlen() Function.

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);
	int len = 0;
	for (int i = 0;str[i] != '\0';i++) {
		len++;
	}
	cout << len;
	return 0;
}