// 1752 Solution
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums)
{
    int count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
    }

    return count <= 1;
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

    if (check(nums))
        cout << "Array is sorted and rotated";
    else
        cout << "Array is NOT sorted and rotated";

    return 0;
}

/*
Leetcode solution
class Solution {
public:
    bool check(vector<int>& nums)
    {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n])
            {
                count++;
            }
        }

        return count <= 1;
    }
};
*/