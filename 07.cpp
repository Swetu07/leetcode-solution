// 07 leetcode

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int x;

    cout << "Enter an integer: ";
    cin >> x;

    int reverse = 0;

    while (x != 0)
    {
        int digit = x % 10;

        // Check for overflow before updating reverse
        if (reverse > INT_MAX / 10 || reverse < INT_MIN / 10)
        {
            cout << "Overflow occurred!" << endl;
            cout << "Reversed Integer = 0";
            return 0;
        }

        reverse = reverse * 10 + digit;

        x = x / 10;
    }

    cout << "Reversed Integer = " << reverse;

    return 0;
}

// leetcode solution
/*
class Solution
{
public:
    int reverse(int x)
    {
        int rev = 0;

        while (x != 0)
        {
            int digit = x % 10;

            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            {
                return 0;
            }

            rev = rev * 10 + digit;

            x /= 10;
        }

        return rev;
    }
};
*/