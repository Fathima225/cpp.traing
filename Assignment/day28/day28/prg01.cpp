#include<iostream>
#include<cstdlib>
#define MAX 5
using namespace std;

int top=-1;
int arr[MAX];
int bottom = -1;
int push(int);
int pop();
int peek();
void display();

int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	display();

	pop();
	pop();
	pop();
	display();
	pop();
	pop();
	//return 0;
}

int push(int v) {
	if (top == MAX - 1)
	{
		cout << "stack is full" << endl;
		return 0;
	}
	top++;
	arr[top] = v;
	return 0;
}
int pop()
{
	if (top == bottom)
	{
		cout << "stack is empty" << endl;
		return 0;
	}
	cout << arr[top] << "got popped out" << endl;
	top--;
	return 0;
}
int peek()
{
	if (top == bottom)
	{
		cout << "stck is empty" << endl;
		return 0;
	}
	return arr[top];

}
void display()
{
	if (top == bottom)
	{
		cout << "Stack is empty" << endl;
		return;

	}
	for (int i = top;i >= 0;i--) 
		cout << arr[i] << endl;

}

