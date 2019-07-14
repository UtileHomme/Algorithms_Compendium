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
        int start = 0, end = 0; 

        int longest = 0;

        int hash[260];

        //for setting all values of hash as "0" by default
        memset(hash, 0, sizeof(hash));

        while(start<=end && end<s.length())
        {
            //store the count for each character of the string
            hash[s[end]]++;

            if(hash[s[end]]>1)
            {
                while(start<=end && hash[s[end]]>1)
                {
                    //slide the window from left to right
                    hash[s[start]]--;
                    start++;
                }
            }

            end++;

            longest = max(longest, end - start);
        }
    
    return longest;
    } 
};

int main()
{
    Solution s;

    string l = "ABDEFGABEF";

    int k = s.longestSubsequenceWithoutRepeatCharLen(l);

    cout<<k; 

    return 0;
}