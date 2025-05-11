//11.Write a Program to Remove All Characters From a String Except Alphabets

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char res[100];
	int j = 0;
	cin.getline(str, 100);

	for (int i = 0;str[i] != '\0';i++) {
		char ch = str[i];
		if ((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z')) {
			res[j] = ch;
			j++;
		}
	}
	res[j] = '\0';
	cout << res;
	return 0;
}