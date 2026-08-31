//75 solution
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums)
{
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);

            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);

            high--;
        }
    }
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements (only 0, 1, 2): ";

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "Sorted array: ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}


/*
Leetcode Solution (3 pointers)
class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;

        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);

                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);

                high--;
            }
        }
    }
};

Leetcode Solution (counting)
class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for (int x : nums)
        {
            if (x == 0)
                count0++;
            else if (x == 1)
                count1++;
            else
                count2++;
        }

        int i = 0;

        while (count0--)
            nums[i++] = 0;

        while (count1--)
            nums[i++] = 1;

        while (count2--)
            nums[i++] = 2;
    }
};
*/