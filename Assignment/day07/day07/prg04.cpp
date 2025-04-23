#include<iostream>
using namespace std;

int main() {
	int startTab, endTab;
	cout << "Start Table:";
	cin >> startTab;
	cout << "End Table:" << endl;
	cin >> endTab;
	for (int i = 1;i <= 10;i++) {
		for (int j = startTab;j <= endTab;j++)
		{
			cout << j << "*" << i << "=" << i * j;
		}
		
		cout  << endl;
	}
	return 0;

}