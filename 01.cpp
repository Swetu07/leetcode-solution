// 01 solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int needed = target - arr[i];

        if (mp.find(needed) != mp.end())
        {
            cout << "Indices: " << mp[needed] << " " << i;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No pair found";

    return 0;
}

/*
leetcode solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            int needed = target - nums[i];

            if (mp.find(needed) != mp.end())
            {
                return {mp[needed], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
*/