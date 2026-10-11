// 53 solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int maxSum = INT_MIN;

    int start = 0;
    int ansStart = 0;
    int ansEnd = 0;

    for (int i = 0; i < n; i++) {
        if (sum == 0) {
            start = i;
        }

        sum += arr[i];

        if (sum > maxSum) {
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum subarray: ";

    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nMaximum subarray sum: " << maxSum << endl;

    return 0;
}

/*
leetcode solution
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            maxSum = max(maxSum, sum);

            if (sum < 0) {
                sum = 0;
            }
        }

        return maxSum;
    }
};
*/