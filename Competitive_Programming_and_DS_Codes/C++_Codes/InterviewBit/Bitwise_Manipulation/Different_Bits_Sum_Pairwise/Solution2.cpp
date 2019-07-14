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

            int one = 0;
            int zero = 0;

            for(int j=0;j<A.size();j++)
            {
                //if the "ith" bit is set
                if(A[j] & (1<<i))
                {
                    one++;
                }
                else 
                {
                    zero++;
                }
            }

            ans = ans + (2 * one * zero);
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