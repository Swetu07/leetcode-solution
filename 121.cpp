// 121 solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter number of days: ";
    cin >> n;

    vector<int> prices(n);

    cout << "Enter stock prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        minPrice = min(minPrice, prices[i]);

        int profit = prices[i] - minPrice;

        maxProfit = max(maxProfit, profit);
    }

    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}


/*
leetcode 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);

            int profit = prices[i] - minPrice;

            maxProfit = max(maxProfit, profit);
        }

        return maxProfit;
    }
};
*/