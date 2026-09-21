// 560 solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;

    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K: ";
    cin >> k;

    unordered_map<int, int> mp;
    mp[0] = 1;

    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        int needed = sum - k;

        if (mp.find(needed) != mp.end()) {
            count += mp[needed];
        }

        mp[sum]++;
    }

    cout << "Number of subarrays: " << count << endl;

    return 0;
}
/*
leetcode solution
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int needed = sum - k;

            if (mp.find(needed) != mp.end()) {
                count += mp[needed];
            }

            mp[sum]++;
        }

        return count;
    }
};
*/