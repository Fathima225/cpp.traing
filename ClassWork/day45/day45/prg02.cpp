#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx1;
std::mutex mtx2;

void thread1()
{
	std::lock_guard<std::mutex> lock1(mtx1);
	std::lock_guard<std::mutex> lock2(mtx2);
	std::cout << "Finished thread 1\n";
}

void thread2()
{
	std::lock_guard<std::mutex>  lock1(mtx1);
	std::lock_guard<std::mutex> lock2(mtx2);
	std::cout << "Finished thread 2\n";

}

int main()
{
	std::thread t1(thread1);
	std::thread t2(thread2);

	t1.join();
	t2.join();

	return 0;
}