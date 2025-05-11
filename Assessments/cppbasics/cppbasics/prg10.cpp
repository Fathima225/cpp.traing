//10.Write a Program to Remove the Vowels from a String.
#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char result[100];
	int j = 0;
	cin.getline(str, 100);

	for (int i = 0;str[i] != '\0';i++) {
		char ch = str[i];
		if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
		{
			result[j] = ch;
			j++;
		}
	}
	result[j] = '\0';
	cout << result;
	return 0;
}