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

        int max_product = INT_MIN; 

        for(int i=0; i<A.size()-2; i++)
        {
            for(int j=i+1; j<A.size()-1; j++)
            {
                for(int k = j+1; k<A.size();k++)
                {
                    max_product = max(max_product, A[i]*A[j]*A[k]);
                }
            }
        }

        return max_product;
        
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