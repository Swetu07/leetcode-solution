// 283 solution
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums)
{
    int j = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    moveZeroes(nums);

    cout << "Array after moving zeroes: ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}

/*
leetcode solution
class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int j = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
*/