// 50 Solution
#include <bits/stdc++.h>
using namespace std;

double Pow(double x, int n)
{
    long long power = n;

    if (power < 0)
    {
        x = 1 / x;
        power = -power;
    }

    double ans = 1;

    while (power > 0)
    {
        if (power % 2 == 1)
        {
            ans = ans * x;
        }

        x = x * x;
        power = power / 2;
    }

    return ans;
}

int main()
{
    double x;
    int n;

    cout << "Enter x and n: ";
    cin >> x >> n;

    cout << Pow(x, n);

    return 0;
}

/*
leetcode version
class Solution {
public:
    double myPow(double x, int n)
    {
        long long power = n;

        if (power < 0)
        {
            x = 1 / x;
            power = -power;
        }

        double ans = 1;

        while (power > 0)
        {
            if (power % 2 == 1)
            {
                ans = ans * x;
            }

            x = x * x;
            power = power / 2;
        }

        return ans;
    }
};
*/