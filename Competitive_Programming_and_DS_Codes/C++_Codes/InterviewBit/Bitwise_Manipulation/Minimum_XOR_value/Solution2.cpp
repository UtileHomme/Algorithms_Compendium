// https: //www.geeksforgeeks.org/minimum-xor-value-pair/amp/

// https: //www.interviewbit.com/problems/min-xor-value/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

class Solution 
{
    public:

    vector <int> findMinXor (vector <int> A)
    {
        sort (A.begin(), A.end());
       
        int min_xor = INT_MAX; 

        vector <int> B(3,0);

        int val = 0;

        int n = A.size();

        for(int i=0; i<n-1; i++)
        {
            val = A[i] ^ A[i+1];

            int k = A[i];
            int l = A[i+1];

       

            if(val<min_xor)
            {

            B[0] = k;
            B[1] = l;
            min_xor = val;
            }
        }

        B[2] = min_xor;

        return B;
    }
};

int main()
{
    vector <int> A = {9,5,3};

    int n = A.size();

    Solution s;

    vector<int> B = s.findMinXor(A);

    for(int i=0;i<B.size();i++)
    {
        cout<<B[i]<<endl;
    }

    return 0;
}

