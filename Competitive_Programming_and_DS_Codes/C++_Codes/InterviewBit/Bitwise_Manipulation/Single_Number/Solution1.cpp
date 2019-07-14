// https : //www.interviewbit.com/problems/single-number/

// https: //www.geeksforgeeks.org/find-element-appears-array-every-element-appears-twice/

// https: //www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution 
{
    public: 

    int singleNumber(const vector <int> &A)
    {
        int res = A[0];

        for(int i=1; i<A.size(); i++)
        {
            res = res ^ A[i];
        }

        return res;
    }
};

int main()
{
    vector <int> A = {2,2,3,3,1,4,4};

    Solution s; 

    int k = s.singleNumber(A);

    cout<<k;

    return 0;
}
