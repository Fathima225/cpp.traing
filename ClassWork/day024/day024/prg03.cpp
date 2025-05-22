#include<iostream>
using namespace std;

typedef struct Employee {
	int e_id;
	char e_name[20];
	char e_desg[20];
}EMP;

int main() {
	EMP e;
	cin >> e.e_id >> e.e_name >> e.e_desg;
	cout << e.e_id << "\t" << e.e_name << e.e_desg;
	return 0;
}