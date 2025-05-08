#include <iostream>
using namespace std;


int main()
{
	int start_range;
	int end_range;
	cout << "enter start range:" << endl;
	cin >> start_range;
	cout << "enter end_range:" << endl;
	cin >> end_range;
	
	for (int i=start_range;i <=end_range;i++)
	{
		if (i % 2 == 0)
			cout << i << endl;
		
	}
	return 0;
}