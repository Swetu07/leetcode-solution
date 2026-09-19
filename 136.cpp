// 136 solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    cout << "Number appearing once: " << ans << endl;

    return 0;
}

/*
leetcode solution
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {
            ans = ans ^ x;
        }

        return ans;
    }
};
*/