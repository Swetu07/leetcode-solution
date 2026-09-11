// 1094 solution
#include <bits/stdc++.h>
using namespace std;

bool carPooling(vector<vector<int>>& trips, int capacity)
{
    int change[1001] = {};

    for (auto trip : trips)
    {
        int passengers = trip[0];
        int from = trip[1];
        int to = trip[2];

        change[from] += passengers;
        change[to] -= passengers;
    }

    int current = 0;

    for (int i = 0; i <= 1000; i++)
    {
        current += change[i];

        if (current > capacity)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;

    cout << "Enter number of trips: ";
    cin >> n;

    vector<vector<int>> trips(n, vector<int>(3));

    cout << "Enter passengers, from, to:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> trips[i][0]
            >> trips[i][1]
            >> trips[i][2];
    }

    int capacity;

    cout << "Enter capacity: ";
    cin >> capacity;

    if (carPooling(trips, capacity))
        cout << "Possible";
    else
        cout << "Not Possible";

    return 0;
}


/*
leetcode solution
class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity)
    {
        int change[1001] = {};

        for (auto trip : trips)
        {
            int passengers = trip[0];
            int from = trip[1];
            int to = trip[2];

            change[from] += passengers;
            change[to] -= passengers;
        }

        int current = 0;

        for (int i = 0; i <= 1000; i++)
        {
            current += change[i];

            if (current > capacity)
            {
                return false;
            }
        }

        return true;
    }
};
*/