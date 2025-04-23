#include<iostream>
using namespace std;

int main() {
	int startTab,endTab;
	cout << "Start Table:";
	cin >> startTab;
	cout << "End Table:" << endl;
	cin >> endTab;
	for (int i =startTab;i <=endTab;i++) {
		for (int j = 1;j <= 10;j++)
		{
			cout << j << "*" << startTab << "=" << j*startTab << endl;
		}
		startTab++;
		cout << "====================================" << endl;
	}
	return 0;
	
}