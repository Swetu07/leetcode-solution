// 26 solution
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }

    int unique = i + 1;

    cout << "Array after removing duplicates: ";

    for (int k = 0; k < unique; k++)
    {
        cout << arr[k] << " ";
    }

    cout << "\nNumber of unique elements: " << unique;

    return 0;
}

/*
leetcode solution
class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        int i = 0;

        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }

        return i + 1;
    }
};
*/