// 1523 solution
#include <iostream>
using namespace std;

int main()
{
    int low, high;

    cout << "Enter low and high: ";
    cin >> low >> high;

    int count = 0;

    for (int i = low; i <= high; i++)
    {
        if (i % 2 != 0)
        {
            count++;
        }
    }

    cout << "Odd numbers = " << count;

    return 0;
}

// leetcode solution
/*
class Solution
{
public:
    int countOdds(int low, int high)
    {
        return (high - low) / 2 + (low % 2 || high % 2);
    }
};
*/