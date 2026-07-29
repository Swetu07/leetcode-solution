// 09 solution
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    int original = x;
    int reverse = 0;

    while (x != 0)
    {
        int digit = x % 10;

        reverse = reverse * 10 + digit;

        x = x / 10;
    }

    if (original == reverse)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
}

// leetcode solution
/*
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }

        int original = x;
        int reverse = 0;

        while (x != 0)
        {
            int digit = x % 10;

            reverse = reverse * 10 + digit;

            x /= 10;
        }

        return original == reverse;
    }
};
*/