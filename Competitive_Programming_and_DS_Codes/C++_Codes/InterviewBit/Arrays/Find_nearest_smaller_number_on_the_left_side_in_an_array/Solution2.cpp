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

        stack <int> S;

        for(int i = 0; i< A.size(); i++)
        {
            while(!S.empty() && S.top()>=A[i])
            {
                S.pop();
            }

            if(S.empty())
            {
                B.push_back(-1);
            }
            else
            {
                B.push_back(S.top());
            }

            S.push(A[i]);
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