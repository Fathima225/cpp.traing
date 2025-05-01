#include <iostream>
using namespace std;

void tunnelEnergy(int n) {
    if (n <= 0) {
        return;
    }

    cout << n << " ";

    tunnelEnergy(n / 2);
}

int main() {
    int n;

    cout << "Enter the energy: ";
    cin >> n;

    tunnelEnergy(n);

    return 0;
}
