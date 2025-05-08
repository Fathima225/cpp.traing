#include<iostream>
#include<algorithm>
using namespace std;

bool areanagram(string str1, string str2)
{
	if (str1.length() != str2.length())return false;

	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	return str1 == str2;
}
int main()
{
	string str1, str2;
	cout << "Enter first string" << endl;
	cin >> str1;
	cout << "enter second string" << endl;
	cin >> str2;
	if (areanagram(str1, str2))
	{
		cout << "This string are anagram" << endl;
	}
	else
	{
		cout << "This string is not an anagram" << endl;
	}

	return 0;
}
