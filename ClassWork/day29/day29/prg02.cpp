#include<iostream>
#define MAX 5;
using namespace std;

class Queue {
private:

	int rear = 0;
	int front = 0;
	int arr[MAX];
public:
	int enqueue(int);
	int dequeue();
	void display();


};
int Queue:: enqueue(int v)
{
	if (rear == MAX - 1)
	{
		cout << "Queue is full" << endl;
		return EXIT_SUCCESS;
	}
	arr[rear] = v;
	rear++;
}
int Queue:: dequeue()
{
	if ((rear == front) || (front == MAX))
	{
		cout << "Queue is empty" << endl;
		rear = 0;
		front = 0;
		return EXIT_SUCCESS;

	}
	cout << arr[front] << "GOT DEQUEUED" << endl;
	front++;
	return EXIT_SUCCESS;
}

void Queue:: display()
{
	if ((rear == front) || (front == MAX))
		cout << "Queue elements are\n";
	for (int i = front;i < rear;i++)
		cout << arr[i] << endl;
}

int main()
{
	Queue Q;
	
		Q.enqueue(10);
		Q.enqueue(20);
		Q.enqueue(30);
		Q.enqueue(40);
		Q.enqueue(50);
		Q.enqueue(60);

		Q.display();
		Q.dequeue();
		Q.display();
	
}