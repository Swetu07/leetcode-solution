// 1281 solution

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int product = 1;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;

        product = product * digit;

        sum = sum + digit;

        n = n / 10;
    }

    cout << "Answer = " << product - sum;

    return 0;
}

/*
 leetcode solution
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int product = 1;
        int sum = 0;

        while (n > 0)
        {
            int digit = n % 10;

            product *= digit;
            sum += digit;

            n /= 10;
        }

        return product - sum;
    }
};
*/