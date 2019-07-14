// https: //www.interviewbit.com/problems/diffk-ii/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

class Solution  
{
    public:
    int diffPossible(const vector <int> &A, int B)
    {
        if(A.size()<2 || B<0)
        {
            return 0;
        }

        unordered_set<int> s;

        for(int i=0;i<A.size();i++)
        {
            int aj = A[i] - B;
            int ai = A[i] + B;

            if(s.find(aj)!=s.end())
            {
                return 1;
            }

            if(s.find(ai)!=s.end())
            {
                return 1;
            }

            s.insert(A[i]);
        }

        return 0;
    }
};

int main()
{
    Solution s;
     
    vector <int> A = {1,5,3};

    int B = 2;

    int k = s.diffPossible(A,B);

    cout<<k;

    return 0;   
}