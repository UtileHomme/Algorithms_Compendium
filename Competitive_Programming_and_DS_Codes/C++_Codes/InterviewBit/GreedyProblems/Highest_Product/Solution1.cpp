// https: //www.interviewbit.com/problems/highest-product/

// https: //www.geeksforgeeks.org/find-maximum-product-of-a-triplet-in-array/

#include <iostream> 
#include <bits/stdc++.h>

using namespace std; 

class Solution 
{
    public: 
    int maxProduct(vector <int> &A) 
    {
        int n = A.size(); 

        if(n<3)
        {
            return -1;
        }

        sort(A.begin(), A.end()); 

        return max(A[0] * A[1] * A[n-1], A[n-1] * A[n-2] * A[n-3]);
    }

};

int main() 
{
    vector <int> A = { 0, -1, 3, 100, -70, 50 }; 

    Solution s; 

    int k = s.maxProduct(A);

    cout<<k; 

    return 0;
}