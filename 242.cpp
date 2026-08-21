// 242 Solution
#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
        return false;

    int hash[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
        hash[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] != 0)
            return false;
    }

    return true;
}

int main()
{
    string s, t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    if (isAnagram(s, t))
        cout << "True";
    else
        cout << "False";

    return 0;
}

// Leetcode Solution
/*
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        int hash[26] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i] - 'a']++;
            hash[t[i] - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (hash[i] != 0)
                return false;
        }

        return true;
        
    }
};
*/