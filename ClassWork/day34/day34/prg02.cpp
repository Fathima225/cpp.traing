#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
	ifstream fin("sample.txt");

	if (fin.is_open())
	{
		fin.seekg(3, ios::beg);
		cout << "current position (get pointer) :" << fin.tellg() << endl;
		char ch;
		fin.get(ch);
		cout << "charecter at position 3:" << ch << endl;


		fin.seekg(-3, ios::cur);
		cout << "current position (get pointer) :" << fin.tellg() << endl;
		char ch1;
		fin.get(ch1);
		cout << "charecter at position 3:" << ch1 << endl;

		fin.seekg(-1, ios::end);
		cout << "current position (get pointer) :" << fin.tellg() << endl;
		char ch2;
		fin.get(ch2);
		cout << "charecter at position 3:" << ch2 << endl;
		fin.close();
		return 0;
	}
}