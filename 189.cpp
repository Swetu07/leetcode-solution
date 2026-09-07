// 189 solution
#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k)
{
    int n = nums.size();

    k = k % n;

    reverse(nums.begin(), nums.end());

    reverse(nums.begin(), nums.begin() + k);

    reverse(nums.begin() + k, nums.end());
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

    int k;

    cout << "Enter K: ";
    cin >> k;

    rotateArray(nums, k);

    cout << "Array after rotation: ";

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
    void rotate(vector<int>& nums, int k)
    {
        int n = nums.size();

        k = k % n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(), nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};
*/