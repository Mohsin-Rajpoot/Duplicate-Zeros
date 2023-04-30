#include <bits/stdc++.h>
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
// 1004. Max Consecutive Ones III
int longestOnes(vector<int> &nums, int k)
{
    int left = 0, curr = 0, ans = 0;
    for (int right = 0; right < nums.size(); right++)
    {
        if (nums[right] == 0)
        {
            curr++;
        }
        while (curr > k)
        {
            if (nums[left] == 0)
            {
                curr--;
            }
            left++;
        }
        ans = max(ans, right - left + 1);
    }
    return ans;
}
int main()
{
    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout << longestOnes(nums, k);
}
