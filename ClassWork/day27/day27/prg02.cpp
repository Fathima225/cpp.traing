//Default constracture

#include<iostream>
using namespace std;

class Employee {
private:
	int e_id;
	char e_name;
public:
	Employee() {
		cout << "Constructure got called" << endl;
	}
		void disp(){
		
			cout << "Function called" << endl;
			cout << e_id << "\t" << e_name << endl;
		}


};

int main()
{
	Employee e;
	e.disp();

	return 0;
}