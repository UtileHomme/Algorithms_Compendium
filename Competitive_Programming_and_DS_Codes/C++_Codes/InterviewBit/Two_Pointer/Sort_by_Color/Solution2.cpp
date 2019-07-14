// https://www.interviewbit.com/problems/sort-by-color/

// https://www.geeksforgeeks.org/sort-array-0s-1s-2s-simple-counting/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void sortColors(vector <int> &A)
  {
    int n = A.size();

    int k = n-1;

    int i=0;

    //first traverse all zeroes in the beginning and come to the point
    // of first non-zero number
    for(; i<n;i++)
    {
      if(A[i]!=0)
      {
        break;
      }
    }

    int j = i;

    //since we are starting from a non-zero number it is likely that a
    //zero might occur somewhere
    //we have to swap the zeroes with the non-zero numbers on the left
    //we use "j" for tracking the "index" before which all numbers are zeroes
    //we use "k" for tracking the "index" before which 0 and 1 exist and after
    // which "2s" exist
    
    for(; i<=k; i++)
    {
      if(A[i]==0)
      {
        swap(A[j], A[i]);
        j++;
      }
      else if(A[i]==2)
      {
        swap(A[i], A[k]);
        i--;
        k--;
      }
    }

  }
};

int main()
{
  Solution s;

  vector <int> A = {0,1,2,0,2,1,1,0,1};

  s.sortColors(A);

  for(int i=0;i<A.size();i++)
  {
    cout<<A[i]<<" ";
  }
}
