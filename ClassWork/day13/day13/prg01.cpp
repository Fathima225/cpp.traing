//strchr- string charecter workout:

#include <iostream>
#include<cstring>

using namespace std;


int main()
{
	char line[] = "This is a pp programming class";
	char ch = 'g';
	unsigned long int BAL, BAr=0;

	cout << "BA line:" << (unsigned long int)line << endl;

	char* res = strchr(line, ch);

	if (res != nullptr) {
		cout << "\t" << res << endl;

	}
	else
		cout << "charecter not found" << endl;



	char substr[] = "s";
	char* res1 = strstr(line, substr);
	if (res1 != nullptr)
		cout << "\t" << res1 << endl;
	else
		cout << "substring not found" << endl;
	return 0;

}