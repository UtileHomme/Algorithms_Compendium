// https: //www.interviewbit.com/problems/different-bits-sum-pairwise/

// https: //www.interviewbit.com/problems/sum-of-pairwise-hamming-distance/

// https: //www.geeksforgeeks.org/sum-of-bit-differences-among-all-pairs/

#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007

using namespace std; 

class Solution 
{
    public:

    int cntBits(vector <int> &A)
    {
        long long int ans = 0;

        for(int i=0;i<31;i++)
        {

            int cnt = 0;

            for(int j=0;j<A.size();j++)
            {
                //if the "ith" bit is set
                if(A[j] & (1<<i))
                {
                    cnt++;
                }
            }

            ans = ans + (2 * cnt * (A.size()-cnt));
            ans = ans % mod;
        }

        return (int)ans;
    }

};

int main()
{
    Solution s; 

    vector <int> A = {1,3,5};

    int k = s.cntBits(A);

    cout<<k;

    return 0;
}