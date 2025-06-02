#include<iostream>
using namespace std;



int main()
{
	string err = "bhima";
	string dbyZeroErr = "Divided by zero error occured";
	string nullPtrErr = "Memory allocation failed";
	char* ptr = nullptr;
	int n1 = 10, n2 = 0;
	try {
		float res = n1 / n2;
		throw res;
	}
	catch (int e)
	{
		cout << "caught a exception :" << e << endl;
	}
	catch (const string e)
	{
		cout << "caught a exception :" << e << endl;
	}
	return 0;
}