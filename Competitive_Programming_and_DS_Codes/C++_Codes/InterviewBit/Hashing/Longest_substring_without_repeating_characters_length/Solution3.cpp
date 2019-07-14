// https: //www.interviewbit.com/problems/longest-substring-without-repeat/

// https : //www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool allUnique(string s, int start, int end)
{
    set <char> Check;

    for(int i = start; i<end; i++)
    {
        if(Check.find(s[i])!=Check.end())
        {
            return false;
        }

        Check.insert(s[i]);
    }

    return true;
}

class Solution
{
  public:
    int longestSubsequenceWithoutRepeatCharLen(string s)
    {
        int n = s.length();

        int ans = 0;

        //Iterate through all possible substrings
        //using a set check if the substring has all unique characters
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if (allUnique(s, i, j))
                {
                    ans = max(ans, j - i);
                }
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;

    string l = "ABDEFGABEF";

    int k = s.longestSubsequenceWithoutRepeatCharLen(l);

    cout << k;

    return 0;
}