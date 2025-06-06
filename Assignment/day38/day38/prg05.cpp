#include<iostream>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<int>user;
	string commands;
	while (true)
	{
		cin >> commands;
		if (commands == "VISIT")
		{
			int id;
			cin >> id;
			user.insert(id);
		}
		else if (commands == "UNIQUE")
		{
			cout << user.size() << " ";
		}
		else if (commands == "TOP")
		{
			for (auto i : user)
				cout << i << " ";

			
		}
	}
	return 0;
}