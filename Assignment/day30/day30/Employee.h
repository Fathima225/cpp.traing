#pragma once
#include<iostream>
#include<string>
#include<stdlib.h>
#define MAX 1000
#include "Employee.h"
using namespace std;

class Employee {
private:
	int id;
	string name;
	float salery;

public:
	Employee(int eid, string n, float sal) {
		id = eid;
		name = n;
		salery = sal;
	}

	int add();
	void display();
	int del(int);
	int search(string);
	int updateSal(int);
	int countEmp();


};
