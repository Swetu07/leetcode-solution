// 412 solution
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << "FizzBuzz";
        }
        else if (i % 3 == 0)
        {
            cout << "Fizz";
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz";
        }
        else
        {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}


// leetcode solution
/*
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> ans;

        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                ans.push_back("FizzBuzz");

            else if (i % 3 == 0)
                ans.push_back("Fizz");

            else if (i % 5 == 0)
                ans.push_back("Buzz");

            else
                ans.push_back(to_string(i));
        }

        return ans;
    }
};
*/