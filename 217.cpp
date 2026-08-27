// 217 Solution
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    if (containsDuplicate(nums))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}


/*
leetcode version
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return true;
            }
        }

        return false;
    }
};
*/