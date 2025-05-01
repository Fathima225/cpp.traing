#include <iostream>

using namespace std;


int main()
{
	char name[20] = {'F','a','t','h','i','m','a'};
	for(int i=0;i<20;i++)
		printf("%c=%d\n", name[i],name[i]);
	for (int i = 39, count = 0;i < 59;i++)
		name[count++] = i;
	cout << "============================================================" << endl;
	for (int i = 0;i < 20;i++)
		printf("%c=%d\n", name[i], name[i]);
	name[0] = 'F';
	name[1] = 'a';
	name[2] = 't';
	name[3] = 'h';
	name[4] = 'i';
	name[5] = 'm';
	name[5] = 'a';
	cout << "==========================================" << endl;

	for (int i = 0;i < 20;i++)
		printf("%c=%d\n", name[i], name[i]);

	printf("Name:%s\n", name);
	return 0;
}
