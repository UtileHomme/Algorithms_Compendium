// https://leetcode.com/problems/merge-sorted-array/

// https://www.geeksforgeeks.org/sorted-merge-one-array/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> merge(vector<int> A, int sizeA, vector<int> B, int sizeB)
{
    int i = sizeA - 1;
    int j = sizeB - 1;

    // calculate the index of the last element of the merged array
    int n = sizeA + sizeB - 1;

    // go from the back by A and B and compare and put to the A element which is larger
    while (i >= 0 && j >= 0)
    {
        if (A[i] > B[j])
        {
            A[n--] = A[i--];
        }
        else
        {
            A[n--] = B[j--];
        }
    }

    // By this point of time we don't need to check for "i>=0" because 
    // since "j" has reached "0", we already have a sorted list 

    while(j>=0)
    {
        A[n--] = B[j--];
    }

    return A;

}

int main()
{
    vector<int> A = {1, 3, 5, 7, 8, 0, 0, 0, 0};
    vector<int> B = {2, 4, 66, 77};

    int sizeA = 5;
    int sizeB = 4;

    A = merge(A, sizeA, B, sizeB);

    for(int i=0; i<A.size(); i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}