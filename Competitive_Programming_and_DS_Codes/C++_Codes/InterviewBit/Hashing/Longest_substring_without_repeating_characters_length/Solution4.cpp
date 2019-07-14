// https: //www.interviewbit.com/problems/longest-substring-without-repeat/

// https : //www.geeksforgeeks.org/length-of-the-longest-substring-without-repeating-characters/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;



class Solution
{
  public:
    int longestSubsequenceWithoutRepeatCharLen(string s)
    {
        int n = s.length();

        int ans = 0;

        set <char> check; 
        set <char> :: iterator it; 

        int i=0, j=0;

        while(i<n && j<n)
        {
            //if the character is not found in the set
            if(check.find(s[j])==check.end())
            {
                //add it to the set and increase the index by 1
                check.insert(s[j]);
                j++;

                //subtract the end of the current substring with the beginning of the substring
                ans = max(ans, j-i);
            }
            else 
            {
                it = check.find(s[i]);

                //find  the location of the character to be removed
                if(it!=check.end())
                {
                check.erase(it);
                }

                //reduce the substring from the front by 1 position
                i++;
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