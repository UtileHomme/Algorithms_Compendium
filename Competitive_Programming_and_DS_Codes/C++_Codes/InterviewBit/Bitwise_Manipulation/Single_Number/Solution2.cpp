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
       set <int> B;

       int sumOfAll=0;

       for(int i=0;i<A.size();i++)
       {
           B.insert(A[i]);
           sumOfAll += A[i];
       }

       int sumOfSingle = 0;

       for(auto k=B.begin(); k!=B.end();k++)
       {
           sumOfSingle += *k;
       }

       int newSum = 2*sumOfSingle;

       int l = newSum - sumOfAll;

       return l;
    }
};

int main()
{
    vector <int> A = {2,2,3,3,1,1,4};

    Solution s; 

    int k = s.singleNumber(A);

    cout<<k;

    return 0;
}
