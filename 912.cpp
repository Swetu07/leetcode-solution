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
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> sortArray(vector<int>& nums)
// {
//     int n = nums.size();

//     for (int i = 0; i < n - 1; i++)
//     {
//         bool swapped = false;

//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (nums[j] > nums[j + 1])
//             {
//                 swap(nums[j], nums[j + 1]);
//                 swapped = true;
//             }
//         }

//         if (swapped == false)
//         {
//             break;
//         }
//     }

//     return nums;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> nums(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     nums = sortArray(nums);

//     for (int x : nums)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

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

// 912 Solution using Insertion Sort
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> sortArray(vector<int>& nums)
// {
//     int n = nums.size();

//     for (int i = 1; i < n; i++)
//     {
//         int key = nums[i];
//         int j = i - 1;

//         while (j >= 0 && nums[j] > key)
//         {
//             nums[j + 1] = nums[j];
//             j--;
//         }

//         nums[j + 1] = key;
//     }

//     return nums;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> nums(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     nums = sortArray(nums);

//     for (int x : nums)
//     {
//         cout << x << " ";
//     }

//     return 0;
// }

// leetcode (using Insertion sort)
/* 
class Solution {
public:
    vector<int> sortArray(vector<int>& nums)
    {
        int n = nums.size();

        for (int i = 1; i < n; i++)
        {
            int key = nums[i];
            int j = i - 1;

            while (j >= 0 && nums[j] > key)
            {
                nums[j + 1] = nums[j];
                j--;
            }

            nums[j + 1] = key;
        }

        return nums;
    }
};
*/

// 912 solution by Merge Sort
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums, int low, int mid, int high)
{
    vector<int> temp;

    int i = low;
    int j = mid + 1;

    while (i <= mid && j <= high)
    {
        if (nums[i] <= nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }

    while (j <= high)
    {
        temp.push_back(nums[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        nums[low + k] = temp[k];
    }
}

void mergeSort(vector<int>& nums, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int mid = (low + high) / 2;

    mergeSort(nums, low, mid);

    mergeSort(nums, mid + 1, high);

    merge(nums, low, mid, high);
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

    mergeSort(nums, 0, n - 1);

    cout << "Sorted array: ";

    for (int x : nums)
    {
        cout << x << " ";
    }

    return 0;
}

/*
leetcode version
class Solution {
public:

    void merge(vector<int>& nums, int low, int mid, int high)
    {
        vector<int> temp;

        int i = low;
        int j = mid + 1;

        while (i <= mid && j <= high)
        {
            if (nums[i] <= nums[j])
            {
                temp.push_back(nums[i]);
                i++;
            }
            else
            {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid)
        {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= high)
        {
            temp.push_back(nums[j]);
            j++;
        }

        for (int k = 0; k < temp.size(); k++)
        {
            nums[low + k] = temp[k];
        }
    }

    void mergeSort(vector<int>& nums, int low, int high)
    {
        if (low >= high)
        {
            return;
        }

        int mid = (low + high) / 2;

        mergeSort(nums, low, mid);

        mergeSort(nums, mid + 1, high);

        merge(nums, low, mid, high);
    }

    vector<int> sortArray(vector<int>& nums)
    {
        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};
*/