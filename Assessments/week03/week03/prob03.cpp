
/*Problem Statement 3
You are given an array A of size N containing positive integers.For each element in the array, count the number of elements to its right that are smaller than the current element.

Your task is to compute and print a list of counts corresponding to each element.*/





#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    vector<int> result(n, 0);


    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[i]) 
            {
                result[i]++;
            }
        }
    }


    for (int i = 0; i < n; i++) 
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}


/*
* Output:
5
5 4 3 2 1

4 3 2 1 0


5
1 2 3 4 5

0 0 0 0 0


6
5 3 7 1 2 6

3 1 3 0 0 0


4
4 4 2 1

2 2 1 0


*/