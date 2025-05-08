//remove spces from the string:

#include<iostream>
using namespace std;

int main()
{
	char str[100];
	char result[100];
	int res = 0;

	cout << "Enter the string" << endl;
	cin.getline(str,100); 

	for (int i = 0;str[i] != '\0';i++) {
		if (str[i] != ' ') {
			result[res] = str[i];
			res++;
		}

	}
	result[res] = '\0';
	cout << result;
	return 0;
}