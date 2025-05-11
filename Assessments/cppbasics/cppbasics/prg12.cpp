//12.Write a Program to Remove Spaces From a String.

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char res[100];
	int j = 0;
	cin.getline(str, 100);
	for (int i = 0;str[i] != '\0';i++)
	{

		if (str[i] != ' ') {
			
			res[j] = str[i];
			j++;
		}

	}
	res[j] = '\0';
	cout << res;
	return 0;
}