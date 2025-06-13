#include<iostream>
#include<thread>
#include<mutex>

using namespace std;


	
		void fun1(){
			for (int i = 0;i <= 5;++i)

			cout << "A";
		}
		void fun2() {
			for (int i = 0;i <= 5;++i)

			cout << "B";
		}
		void fun3(){
			for (int i = 0;i <= 5;++i)

			cout << "C";
		}
	


int main()
{
	thread t1(fun1);
	t1.join();
	thread t2(fun2);
	t2.join();
	thread t3(fun3);
	t3.join();
	return 0;
}