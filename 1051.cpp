// 1051 solution
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cout << "Enter number of students: ";
    cin >> n;

    vector<int> heights(n);

    cout << "Enter heights of students: ";

    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<int> expected = heights;

    sort(expected.begin(), expected.end());

    int count = 0;

    for (int i = 0; i < n; i++) {

        if (heights[i] != expected[i]) {
            count++;
        }

    }

    cout << "Number of students in wrong positions: "
         << count << endl;

    return 0;
}

/*
leetcode version
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;

        sort(expected.begin(), expected.end());

        int count = 0;

        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }

        return count;
    }
};
*/