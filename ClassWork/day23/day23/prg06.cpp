#include<iostream>
using namespace std;


typedef struct Employee
{
	int empID;
	string empName;
	
}EMP;

typedef struct Period {
	int empID;
	int days;
};

typedef struct Salery {
	int empId;
	float empBase;
	float empVariable;
	float empAllowance;

};

void disp(EMP e);
int getEmpDetails(EMP* e );
int calculateSalery(Salery S,Period P);
int getSalerryDetails(Salery);

int calculateSalery(Salery S,Period P)
{
	float tot= (S.empBase + S.empAllowance+S.empVariable) * P.days;
	return tot;
}


void disp(EMP e)
{
	cout << "===========================================" << endl;
	cout << "Name: " << e.empName << endl;
	cout << "ID: " << e.empID << endl;
	cout << "===========================================" << endl;
}

int getEmpDetails(EMP* e)
{
	cout << "Name: ";cin >> e->empName;
	cout << "ID: "; cin >> e->empID;

	return EXIT_SUCCESS;
}

int getSaleryDetails(Salery S) {
	cout << "Base: ";cin >> S.empBase;
	cout << "Variable: ";cin >> S.empVariable;
	cout << "Allowance: ";cin >> S.empAllowance;
}


	










