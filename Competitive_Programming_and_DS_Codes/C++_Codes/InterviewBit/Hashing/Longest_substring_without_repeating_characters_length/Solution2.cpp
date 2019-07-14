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
       vector <int> hash(256,-1);

       int maxLen = 0, start = -1; 

       for(int i=0; i<s.length();i++)
       {
           if(hash[s[i]]>start)
           {
               start = hash[s[i]];
           }

           hash[s[i]] = i;

           maxLen = max(maxLen, i - start);
       }

       return maxLen;
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