
/*Problem Statement 2
You are given a sorted array A of size N containing integers.Every element in the array appears exactly twice, except for one element that appears only once.Your task is to find and print that unique element.*/



#include <iostream>
#include <vector>
using namespace std;

int findUniqueElement(const vector<int>& arr)
{
    int result = 0;
    for (int num : arr) 
    {
        result ^= num;  
    }
    return result;
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


    cout << findUniqueElement(arr) << endl;

    return 0;
}


/*
Output:
7
3 3 4 4 5 5 7
7

9
1 1 2 2 3 4 4 5 5
3

11
0 0 1 1 2 2 6 6 7 7 9
9


5
-10 -10 -3 -3 0
0

7
3 3 4 4 5 5 7
7



*/