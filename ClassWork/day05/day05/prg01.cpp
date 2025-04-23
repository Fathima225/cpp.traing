#include <iostrean>
using namespace std;

enum waterFilter {
	Cold,
	Hot,
	Normal
};

int main()
{
	int inputwaterFilter;
	cin >> inputwaterFilter;
	switch (inputwaterFilter)
	{
	default:
		cout << "No inputwaterFilter found" << endl;
		break;
	case Cold:
		cout << "Choose waterFilter: Cold" <<Cold<< endl;
		break;
	case  Hot:
		cout << "Choose waterFilter: Hot" <<Hot<< endl;
		break;
	case  Normal:
		cout << "Choose waterFilter: Normal" <<Normal<< endl;
		break;
	}
}