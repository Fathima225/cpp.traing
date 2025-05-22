#include<iostream>
using namespace std;

class Gradebook {
private:
	//this is 3 properties
	int sub1;
	int sub2;
	int sub3;
public:
	//here use get and set methods
	void setSub1(int s1) {
		sub1 = s1;
	}
	int getSub1() {
		return sub1;
	}
	void setSub2(int s2) {
		sub2 = s2;
	}
	int getSub2() {
		return sub2;
	}
	void setSub3(int s3) {
		sub3 = s3;
	}
	int getSub3() {
		return sub3;
	}
	//here use display function to get input from user and display output
	void  display() {
		cout << "Enter Sub1 Marks :" << endl;
		cin >> sub1;
		cout << "Enter Sub2 Marks :" << endl;
		cin >> sub2;
		cout << "Enter Sub3 Marks :" << endl;
		cin >> sub3;
		cout << "AVG :" << calculateAvg() << endl;

		}
	//here calculate the average of 3 subjects 
	float calculateAvg() {
		int avg = sub1 + sub2 + sub3;
		return avg / 3;
	}

	// this function we use to give grade based on the marks
	void stdGrade() {

		if (calculateAvg() >= 80 && calculateAvg() <= 100) {
			cout << "A";
		}
		
		else if (calculateAvg() >= 70 && calculateAvg() < 80)
		{
			cout << "B";
		}
		else if (calculateAvg() >= 60 && calculateAvg() < 70)
		{
			cout << "C";
		}
		else {
			cout << "D";
		}



	}
	
};

int main()
{	//boject of class
	Gradebook G;
	//here we call stdGrade function
	G.stdGrade();
	//here we call display function
	G.display();
	return 0;
}