// https://www.interviewbit.com/problems/maximum-unsorted-subarray/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector <int> subUnsort(vector <int> &A)
  {
    int s=0, e=A.size()-1, max, min;

    vector <int> B;

    int i;

    //checking the first element from the left which shows discrepancy
    // in the ascending order pattern
    for(i=0;i<A.size();i++)
    {
      if(A[i]>A[i+1])
      {
        s = i;
        break;
      }
    }

    //if no discrepancy has been found that means the array is sorted
    if(i==A.size()-1)
    {
      B.push_back(-1);
      return B;
    }

    //checking the first element from the right which shows discrepancy
    // in the ascending order pattern
    for(int j=A.size()-1; j>0;j--)
    {
      if(A[j]<A[j-1])
      {
        e = j;
        break;
      }
    }

    max = A[s], min = A[s];

    //Looking for the min and max element between the assumed unsorted array indices
    for(i=s+1; i<=e; i++)
    {
      if(A[i]>max)
      {
        max = A[i];
      }

      if(A[i]<min)
      {
        min = A[i];
      }
    }

    //after find the min element in the assumed unsorted subarray, we need to check
    //whether any element on the left of this subarray is more than the minimum of this subarray
    for(int i=0;i<s;i++)
    {
      if(A[i]>min)
      {
        s = i;
        break;
      }
    }

    //after find the min element in the assumed unsorted subarray, we need to check
    //whether any element on the right of this subarray is less than the minimum of this subarray
    for(int j=A.size()-1;j>=e+1;j--)
    {
      if(A[j]<max)
      {
      e = j;
      break;
      }
    }

    B.push_back(s);
    B.push_back(e);

    return B;

  }
};

int main()
{
  vector <int> A = {10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};

  Solution s;

  vector <int> B = s.subUnsort(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }
  return 0;
}
