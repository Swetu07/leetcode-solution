// 1920 solution

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int nums[100];
    int ans[100];

    cout << "Enter elements:\n";

    for(int i=0;i<n;i++)
        cin>>nums[i];

    for(int i=0;i<n;i++)
    {
        ans[i]=nums[nums[i]];
    }

    cout<<"Answer Array:\n";

    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";

    return 0;
}


// leetcode solution
/*
class Solution
{
public:
    vector<int> buildArray(vector<int>& nums)
    {
        vector<int> ans(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            ans[i]=nums[nums[i]];
        }

        return ans;
    }
};
*/