#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif




#include<iostream>
using namespace std;

int main()
{
	int a[] = {11,13,12,15,8,6,4,3,7,1};
	int i,countOdd,countEven;

	constexpr int noElems =  sizeof(a) / sizeof(a[0]);
	int outputArr[noElems];
	cout << "No of elements present:" << noElems << endl;

	/*for (a[i] = 0, countOdd = 0;i < 10;i++)
	{
		if (a[i] % 2 != 0)
		{
			a[countOdd] =a [i];
			countOdd++;
		}
	}
		

	for (i = 0, countEven = countOdd;i < 10;i++)
	{
		if (i % 2 == 0)
		{
			a[countEven] = i;
			countEven++;
		}
	}
	for(i=0;i<10;i++)
	cout <<"a[i]:" << a[i] << endl;*/

	for (i = 0;i < noElems;i++)
		cout <<"a[i]:" << a[i] << endl;

		return 0;
}