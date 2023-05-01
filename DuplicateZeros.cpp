#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
// 1089. Duplicate Zeros
//  Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.
int main()
{
    // input
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    // Output: [1,0,0,2,3,0,0,4]
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            for (int j = arr.size() - 1; j > i; j--)
            {
                arr[j] = arr[j - 1];
            }
            i++;
        }
    }
}
