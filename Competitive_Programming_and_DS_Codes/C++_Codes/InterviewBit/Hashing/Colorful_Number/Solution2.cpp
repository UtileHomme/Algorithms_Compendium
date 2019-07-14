// https: //www.interviewbit.com/problems/colorful-number/

#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <unordered_map>

using namespace std; 

class Solution 
{
    public: 
    int colorful(int A)
    {
        if(!A)
        {
            return 0;
        }

        string a = to_string(A);

        int len = a.length();

        long long int val = 1; 

        map<long int, bool> myMap; 

        for(int i=0; i<len; i++)
        {
            val = 1;

            for(int j=i; j<len; j++)
            {
                val = val * (long long)(a[j]-'0');

                if(myMap.find(val)!= myMap.end())
                {
                    return 0;
                }

                myMap[val] = true;
            }
        }

        return 1;
    }
};

int main()
{
    Solution s; 

    int k = s.colorful(204);

    cout<<k;

    return 0;
}