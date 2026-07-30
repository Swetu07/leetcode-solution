// 258 solution
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    while (num >= 10)
    {
        int sum = 0;

        while (num > 0)
        {
            int digit = num % 10;

            sum += digit;

            num /= 10;
        }

        num = sum;
    }

    cout << "Answer = " << num;

    return 0;
}

// leetcode solution
/*
class Solution
{
public:
    int addDigits(int num)
    {
        while (num >= 10)
        {
            int sum = 0;

            while (num > 0)
            {
                sum += num % 10;
                num /= 10;
            }

            num = sum;
        }

        return num;
    }
};
*/