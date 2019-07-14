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
        int min_xor = INT_MAX; 

        vector <int> B(3,0);

        for(int i=0;i<A.size();i++)
        {
            for(int j=i+1; j<A.size();j++)
            {
                min_xor = min(min_xor, A[i]^A[j]);
                B[0] = A[i];
                B[1] = A[j];

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

