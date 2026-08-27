// 88 solution
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    vector<int> temp;

    int i = 0;
    int j = 0;

    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            temp.push_back(nums1[i]);
            i++;
        }
        else
        {
            temp.push_back(nums2[j]);
            j++;
        }
    }

    while (i < m)
    {
        temp.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        temp.push_back(nums2[j]);
        j++;
    }

    for (int k = 0; k < m + n; k++)
    {
        nums1[k] = temp[k];
    }
}

int main()
{
    int m, n;
    cout<< "enter m: ";
    cin >> m;

    vector<int> nums1(m);

    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }

    cin >> n;

    vector<int> nums2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }

    merge(nums1, m, nums2, n);

    for (int x : nums1)
    {
        cout << x << " ";
    }

    return 0;
}

/*
leetcode solution
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        vector<int> temp;

        int i = 0;
        int j = 0;

        while (i < m && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else
            {
                temp.push_back(nums2[j]);
                j++;
            }
        }

        while (i < m)
        {
            temp.push_back(nums1[i]);
            i++;
        }

        while (j < n)
        {
            temp.push_back(nums2[j]);
            j++;
        }

        for (int k = 0; k < m + n; k++)
        {
            nums1[k] = temp[k];
        }
    }
};
*/