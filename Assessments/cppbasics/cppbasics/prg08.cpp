//8.Write a Program to Toggle Each Character in a String.

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 100);

	for (int i = 0;str[i]!='\0';i++)
	{
		if (str[i]>='a'&&str[i]<='z') {
			str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] + 32;
		}
		
	}
	cout << str << endl;
	return 0;
}