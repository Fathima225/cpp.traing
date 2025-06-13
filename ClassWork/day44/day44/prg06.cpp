#include<iostream>
#include<thread>

using namespace std;

void display(int n, int flag)
{
	for (int i = 0;i <= n;i++)
	{
		if (i % 2 == flag)
			cout << i << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	thread t1(display, n, 0);
	t1.join();

	thread t2(display, n, 1);
	t2.join();

	return 0;
}
