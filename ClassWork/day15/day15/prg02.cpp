#include<iostream>
using namespace std;


float caltriangle(float base,float height) {

	return 0.5*base*height;


}
double calrectangle(double length,double width ) {
	return length * width;
}

double calsquare(double side) {
	return side * side;
}

double calcircle(double radius) {
	return 3.141 * radius * radius;
}

int displaymenu() {
	int choice;
	cout << "menu:" << endl;
	cout << "1.Option 1:" << endl;
	cout << "2.Option 2:" << endl;
	cout << "3.Option 3:" << endl;
	cout << "4.Option 4:" << endl;
	cout << "5.Exit 5:" << endl;
	cout << "Enter the choice" << endl;
	cin >> choice;
	return choice;
}




int main() {
	float base, height, area;

	cout << "Enter the base of the triangle" << endl;
	cin >> base;
	cout << "Enter the height of the triangle" << endl;
	cin >> height;

	area = caltriangle(base, height);
	cout <<"area of triangle is: " << area;

	return 0;
}