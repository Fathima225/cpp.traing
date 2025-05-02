/*Problem Statement 4
You are given an array A of N positive or negative integers.Your task is to find the first equilibrium position in the array.

An equilibrium position is an index i such that the sum of elements before index i is equal to the sum of elements after index i.

Return the first equilibrium index(0 - based indexing).If no such index exists, return -1.*/



#include <iostream>
#include <vector>
using namespace std;

int findEquilibriumIndex(const vector<int>& arr, int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) 
    {
        totalSum -= arr[i];

        if (leftSum == totalSum)
        {
            return i; 
        }

        leftSum += arr[i];
    }

    return -1; 
}

int main()
{
    int n;
    cin >> n; 

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; 
    }

    int equilibriumIndex = findEquilibriumIndex(arr, n);
    cout << equilibriumIndex << endl;

    return 0;
}


/*
Output:
7
- 7 1 5 2 - 4 3 0
3


5
0 0 0 0 -1
4



4
1 2 3 4
-1


5
3 1 5 2 2
2

*/