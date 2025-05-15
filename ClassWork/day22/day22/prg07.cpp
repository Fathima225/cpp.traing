//count vowel in string using pointer

#include<iostream>
using namespace std;

int vowelCount(char*);

int vowelCount(char* ptr)
{
	int counter = 0;
	while (*ptr != '\0')
	{
		switch (*ptr)
		{
		case'a':
		case'A':
		case'e':
		case'E':
		case'i':
		case'I':
		case'o':
		case'O':
		case'u':
		case'U':
			counter++;

		}
		ptr++;
	}
	return counter;

}


int main()
{
	char ch[100];
	cin.getline(ch, 100);
	cout << vowelCount(ch) << endl;
	return 0;
}