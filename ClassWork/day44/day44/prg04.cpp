#include<iostream>
#include<thread>
using namespace std;

void num1()
{
	for (int i = 1;i <= 10;++i) {
		cout<<"thread1 :" << i << " " << endl;
	}
}
void num2()
{
	for (int i = 11;i <= 20;++i)
	{
		cout<<"thread2 :" << i << " " << endl;
	}
}

int main()
{
	thread t1(num1);
	t1.join();

	thread t2(num2);
	t2.join();

	return 0;
}