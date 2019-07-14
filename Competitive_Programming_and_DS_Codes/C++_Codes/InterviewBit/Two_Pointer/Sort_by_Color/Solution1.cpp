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

    int count0 = 0, count1=0, count2=0;

    //count all occurrences of "0s, 1s, 2s"
    for(int i=0;i<n;i++)
    {
      if(A[i]==0)
      {
        count0++;
      }

      if(A[i]==1)
      {
        count1++;
      }

      if(A[i]==2)
      {
        count2++;
      }
    }

    for(int i=0;i<count0;i++)
    {
      A[i]=0;
    }

    for(int i=count0; i<(count0+count1); i++)
    {
      A[i]=1;
    }

    for(int i = (count0+count1); i<n; i++)
    {
      A[i]=2;
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
