#include<iostream>
#include<set>
#include<string>

using namespace std;

int main()
{
	set<string>banwords; { "bad", "evil", "vulgar"; }
	string text = "this is a bad example with evil words";
	
	/*size_t start = 0, end = 0;
	while (true)
	{
		end = text.find(' ', start);
		string words;
		string result;
		if (end == string::npos)
		{
			words = text.substr(start, end - start);
		}
		if(banwords.find(words)
	}*/
			
		
	
	return 0;
}