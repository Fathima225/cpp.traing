#include<iostream>
#include<thread>
#include<mutex>

using namespace std;

mutex m;
void func() {
	int n = 0;
	cout << "enter the number";
	cin >> n;
	for (int i = 1;i <= n;++i) {
		if (i % 2 == 0)
		{
			cout << "thread 2 :" << i << endl;
		}
		else{
			cout << "thread 1 :" <<i<< endl;
		}
	}
}

int main()
{
	thread t1(func);
	t1.join();
	return 0;
}