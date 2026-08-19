// 1480 solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i < n; i++)
    {
        nums[i] = nums[i] + nums[i - 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}

// leetcode solution
/*
class Solution {
public:
    vector<int> runningSum(vector<int>& nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            nums[i] = nums[i] + nums[i - 1];
        }

        return nums;
    }
};
*/