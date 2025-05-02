
/*Problem Statement 1
Write a program that performs the following tasks :

Finds the starting positions(0 - based index) of the substrings "are" and "i" in a given input string.
Calculates and prints the sum of these two positions.
If either of the substrings is not found in the input, treat its position as - 1.*/



#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;
	cout << " Enter a sentence with are and i only small letters: ";
	getline(cin, input);

	int position_are = input.find("are");
	if (position_are == string::npos)
	{
		position_are = -1;
	}


	int position_i = input.find("i");
	if (position_i == string::npos )
	{
		position_i = -1;
	}

	int sum = position_are + position_i;

	cout << " sum: " << sum;


	return 0;
}

/*
Output:
 Enter a sentence with are and i only small letters: there are fruits in the basket
 sum: 19

  Enter a sentence with are and i only small letters: The sun is beautiful
 sum: 7

  Enter a sentence with are and i only small letters: We are playing football
 sum: 14


  Enter a sentence with are and i only small letters: he works at tcs
 sum: -2

*/