// 1342 solution

#include <iostream>
using namespace std;

int main()
{
    int num, steps = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = num - 1;
        }

        steps++;
    }

    cout << "Total Steps = " << steps;

    return 0;
}


// leetcode solution
/* 
class Solution
{
public:
    int numberOfSteps(int num)
    {
        int steps = 0;

        while (num != 0)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
            }
            else
            {
                num = num - 1;
            }

            steps++;
        }

        return steps;
    }
};
*/