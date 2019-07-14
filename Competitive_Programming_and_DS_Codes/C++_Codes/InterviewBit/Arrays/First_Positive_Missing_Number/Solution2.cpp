// https://www.interviewbit.com/problems/first-missing-integer/

#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int firstMissingPositive(vector <int> &A)
  {
    int maxElement = A[0];

    int n = A.size();

    for(int i=1; i<n; i++)
    {
      if(A[i] > maxElement)
      {
        maxElement = A[i];
      }

      int maxSize = max(maxElement, n);

      bool freq[maxSize+1];

      memset(freq, false, sizeof(freq));

      //updating the frequency of positive elements as indices with true
      for(int i=0;i<n;i++)
      {
        if(A[i]>0)
        {
          freq[A[i]]=true;
        }
      }

      //the first index which is false is the first missing positive integer
      for(int i=1; i<=maxSize;i++)
      {
        if(freq[i]==false)
        {
          return i;
        }
      }
    }
  }
};

int main()
{
  Solution s;

  vector <int> A = {-3, 10, 1, 3};
  int k = s.firstMissingPositive(A);

  cout<<k;
  return 0;
}
