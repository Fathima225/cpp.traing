#include<iostream>
#include<string>
using namespace std;


	bool isVowel(char c) 
	{
		switch (tolower(c)) {
		case'a':
		case'e':
		case'i':
		case'o':
		case'u':
			return true;
		default:return false;
		}
	}

	int main() {
		string str = "this is cpp programming class";
		string result = "";

		for (char c:str) {
			if (!isVowel(c)) {
				result += c;
			}
		}
		cout << result << endl;
		return 0;
	}