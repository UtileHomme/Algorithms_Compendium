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

        int maxA = INT_MIN, maxB = INT_MIN, maxC = INT_MIN;

        int minA = INT_MAX, minB = INT_MAX; 

        for(int i=0; i<A.size(); i++)
        {
            // Update Maximum, second maximum and third
            // maximum element
            if(A[i]>maxA)
            {
                maxC = maxB; 
                maxB = maxA; 
                maxA = A[i];
            }

            // Update second maximum and third maximum element
            else if(A[i]>maxB)
            {
                maxC = maxB; 
                maxB = A[i];
            }

            // Update third maximum element
            else if(A[i]>maxC)
            {
                maxC = A[i];
            }

            // Update Minimum and second mimimum element
            if(A[i]<minA)
            {
                minB = minA;
                minA = A[i];
            }

            // Update second mimimum element
            else if(A[i]<minB)
            {
                minB = A[i];
            }
    
        }

        return max(minA * minB * maxA, maxA * maxB * maxC);
        
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