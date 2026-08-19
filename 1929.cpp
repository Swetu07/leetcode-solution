// 1929 Solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}

// Leetcode Solution
/*
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums)
    {
        vector<int> ans = nums;

        for (int x : nums)
        {
            ans.push_back(x);
        }

        return ans;
    }
};
*/