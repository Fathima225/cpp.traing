#include <iostream>
#include <thread>
using namespace std;
void backgroundTask() {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << "Background task done." << std::endl;
}
void modifyX(int& x)
{
    std::this_thread::sleep_for(std::chrono::seconds(3));
    x *= 2;
 }

int main() {
    int val = 10;
    
    std::thread t(backgroundTask);
    t.detach(); // Main won't wait
    std::cout << "Main is not blocked.\n";
    std::this_thread::sleep_for(std::chrono::seconds(50)); // Wait to see output
    thread t1(modifyX, ref(val));//call by reference
    cout << "val: " << val << endl;
    t1.join();
    return 0;
}