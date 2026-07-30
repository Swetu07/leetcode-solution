// 507 solution
#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter number: ";
    cin >> num;

    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
    {
        cout << "Perfect Number";
    }
    else
    {
        cout << "Not a Perfect Number";
    }

    return 0;
}

// leetcode solution 
/*
class Solution
{
public:
    bool checkPerfectNumber(int num)
    {
        if (num <= 1)
            return false;

        int sum = 1;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                sum += i;

                if (i != num / i)
                {
                    sum += num / i;
                }
            }
        }

        return sum == num;
    }
};
*/