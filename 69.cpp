//69 solution
#include <bits/stdc++.h>
using namespace std;

int mySqrt(int x)
{
    int low = 0;
    int high = x;
    int ans = 0;

    while (low <= high)
    {
        long long mid = low + (high - low) / 2;

        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    int x;

    cout << "Enter X: ";
    cin >> x;

    cout << "Integer square root: " << mySqrt(x);

    return 0;
}

/*
leetcode solution
class Solution {
public:
    int mySqrt(int x)
    {
        int low = 0;
        int high = x;
        int ans = 0;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;

            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid < x)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};
*/