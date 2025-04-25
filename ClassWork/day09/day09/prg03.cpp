#include<cstdio>
//using namespace std;

int main()
{
	int a = 10;
	float b = 15.5;
	char c = 'A';
	double d = 101.111;
	char s[20];

	printf("\n%c\n%d\n%f\n%lf\n%s\n", c, a, b,d,"fathima");
	scanf(" %c%d%f%lf%s", &c, &a, &d, s);
	printf("\n%c\n%d\n%f\n%lf\n%s\n", c, a, b ,d,s);

	return 0;
}