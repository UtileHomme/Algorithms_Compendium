// https://www.geeksforgeeks.org/find-the-nearest-smaller-numbers-on-left-side-in-an-array/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
    public:

    vector <int> leftSmallest(vector <int> A)
    {
        vector <int> B;

        B.push_back(-2);

        int j = 0;
        for(int i = 1; i<A.size(); i++)
        {
            for(j = i-1; j>=0; j--)
            {
                if(A[j] <  A[i])
                {
                    B.push_back(A[j]);
                    break;
                }
            }

            if(j==-1)
            {
                B.push_back(-1);
            }
        }

        return B;
    }
};

int main()
{
    Solution s;

    vector <int> A = {1,6,4,10,2, 5};

    vector <int> B = s.leftSmallest(A);

    for(int i=0; i<B.size(); i++)
    {
        cout<<B[i]<<" ";
    }

    return 0;
}