// 912 solution Selection Sort
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> sortArray(vector<int>& nums)
// {
//     int n = nums.size();

//     for (int i = 0; i < n - 1; i++)
//     {
//         int minIndex = i;

//         for (int j = i + 1; j < n; j++)
//         {
//             if (nums[j] < nums[minIndex])
//             {
//                 minIndex = j;
//             }
//         }

//         swap(nums[i], nums[minIndex]);
//     }

//     return nums;
// }

// int main()
// {
//     int n;

//     cout << "Enter size: ";
//     cin >> n;

//     vector<int> nums(n);

//     cout << "Enter elements: ";

//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     nums = sortArray(nums);

//     cout << "Sorted array: ";

//     for (int x : nums)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

/*
Leetcode Solution (but its not allowed using Selection Sort)
class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
    {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            int minIndex = i;

            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] < nums[minIndex])
                {
                    minIndex = j;
                }
            }

            swap(nums[i], nums[minIndex]);
        }

        return nums;
    }
};
*/

// 912 Solution using Bubble Sort
#include <bits/stdc++.h>
using namespace std;

vector<int> sortArray(vector<int>& nums)
{
    int n = nums.size();

    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }

    return nums;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    nums = sortArray(nums);

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}

// Leetcode Solution (bubble)
/*
class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
    {
        int n = nums.size();

        for (int i = 0; i < n - 1; i++)
        {
            bool swapped = false;

            for (int j = 0; j < n - i - 1; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }

            if (!swapped)
            {
                break;
            }
        }

        return nums;
    }
};
*/