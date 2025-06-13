#include<iostream>
#include<fstream>
#include<sstream>
#include<map>
#include<vector>
#include<chrono>
#include<thread>
using namespace std;

enum loglevel {
	INFO = 0,
	DEBUG,
	WARNING,
	ERROR,
};
class logger {
	ofstream logFile;
public:
	logger(const char *filename)
	{
		try {
			logFile.open(filename, ios::app);
			if (!logFile.is_open())
				throw "file is not open";
		}
		catch (const char* s) {
			cout << "error" << endl;
		}
		
	}
};
class User {
public:
	string userName;
	int password;
};
class Customer {
public:
	string MSISDN;
	string brand;
	int ininternal = 0;
	int outinternal = 0;
	int inExternal = 0;
	int outExternal = 0;

};


class CDR {
private:
	vector<User>users;
	vector<Customer>customers;
public:
	
	bool signup()
	{
		string username;
		string password;
		cout << "Enter user name :" << endl;
		cin >> username;
		cout << "Enter password :" << endl;
		cin >> password;
		ofstream fout("input.txt", ios::app);
		fout << username << endl;
		fout << password << endl;
		cout << "sign up Successfully\n";
		return true;
	}
	bool login()
	{
		string username;
		string password;
		cout << "Enter Username :" << endl;
		cin >> username;
		cout << "Enter pssword :" << endl;
		cin >> password;
		ifstream fin("input.txt");
		string un;
		string p;
		while (fin >> un >> p) {
			if (un == username && p == password)
			{
				cout << "login succesfull" << endl;
				return true;
			}
		}
		cout << "login fail" << endl;
		return false;
	}
	
	
	
};
class CDRprocessor {
private:
	std::vector<string>customerBillingData;
	std::vector<string>interOperatorBillingData;
public:
	void processCustomerBilling()
	{
		customerBillingData.push_back("customer call:ID 101");
		std::cout << "[customer billing]processed data\n";
	}
	void processinterOperatorBilling()
	{
		interOperatorBillingData.push_back("Interoperator call:ID 201");
		std::cout << "[interoperator billing]processed data\n";
	}
	void processCDR()
	{
		std::thread t1(&CDRprocessor::processCustomerBilling, this);
		std::thread t2(&CDRprocessor::processinterOperatorBilling, this);
		t1.join();
		t2.join();
		std::cout << "processed the CDR data\n";
	}
	void printBillingData() {
		std::cout <<"BillingData\n";
		for (const auto& entry : customerBillingData) {
			std::cout << entry << "\n";
		}
		for (const auto& entry : interOperatorBillingData) {
			std::cout << entry << "\n";
		}
	}
};

int main()
{
	CDR c;
	int choice;
	while (true)
	{
		cout << "1.Signup" << endl;
		cout << "2.Login" << endl;
		cout << "3.Exit" << endl;
		cout << "choice :" << endl;
		cin >> choice;
		if (choice == 1)
		{
			c.signup();
		}
		else if (choice == 2)
		{
			c.login();
			break;
		}
		else if (choice == 3)
		{
			return 0;
		}
		
	}
	CDRprocessor processor;
	int option;
	while (true) {
		std::cout << "1.process CDR file" << endl;
		std::cout << "2.print/search for billing information" << endl;
		std::cout << "3.logout" << endl;
		std::cout << "choice :" << endl;
		cin >> option;
		switch (option) {
		case 1:
			processor.processCDR();
			break;
		case 2:
			processor.printBillingData();
			break;
		case3:
			cout << "invalid" << endl;
			break;
		}

	}



	
	
	return 0;
}
