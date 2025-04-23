#include <iostream>
#include <stdio.h>
#include "stringHand.h"

using namespace std;

void stringHandling()
{
	char ch = 'A';
	char fName[20]; //array of charecter(size if fixed)
	string sName;  //string (dynamically growsthe size of the string)

	cout << "ch" << endl;
	cout << "Enter First Name:" << endl;
	cin >> fName;
	cout << "Enter Second Name:" << endl;
	cin >> sName;
	cout << "\nMy Name is \n :" << fName << "\a " << sName << endl;

	/*char Name[5];

	cout << sizeof(Name) << endl;
	scanf("%s", Name);
	for (int i = 0; i < 20; i++);
	{
		printf("\n%c=%d", Name[i], Name[i]);
	}*/



	

}
//Enumuration:

void enumHandling()
{
	enum Day { Monday=1000, Tuesday, Wednesday=2000,Thursday,Friday,Saturday,Sunday };

	Day today = Thursday;
	cout << "Value of today:" << today << endl;
}