// 485 solution
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

    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxCount = max(maxCount, count);
        }
        else
        {
            count = 0;
        }
    }

    cout << "Maximum consecutive ones: " << maxCount;

    return 0;
}


/*
leetcode solution
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else
            {
                count = 0;
            }
        }

        return maxCount;
    }
};
*/