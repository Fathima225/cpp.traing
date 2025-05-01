//



#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char nameEmp[20];//1 row with 20 col
	cin >> nameEmp;
	cout << nameEmp << endl;
	cout << "len string:" << strlen(nameEmp) << "\t size of name:" << sizeof(nameEmp)<<endl;
}