#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[20];
	int count = 0;
		cout << "Enter the string" << endl;
		cin.getline(str, 20);
		for (int i = 0;i <= 20;i++)
		{
			switch (str[i]) {
			case'a':
			case'e':
			case'i':
			case'o':
			case'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':count++;
				break;
			}
		}cout << count;

		return 0;
	

}