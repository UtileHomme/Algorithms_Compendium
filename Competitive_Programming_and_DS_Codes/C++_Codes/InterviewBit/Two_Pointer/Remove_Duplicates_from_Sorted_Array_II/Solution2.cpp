// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int removeDuplicatesII(vector <int> &A)
  {
    if(A.size()==1)
    {
      return 1;
    }
    else if(A.size()==2)
    {
      return A.size();
    }

    int n = A.size();

    int count = 1;
    int len = 1;

    int prev = A[0];

    for(int i=1;i<n;i++)
    {
      if(A[i]!=prev)
      {
        A[len]=A[i];
        len++;
        prev = A[i];
        count = 1;
      }

      else if(count<2)
      {
        A[len]=A[i];
        len++;
        count++;
      }
    }

    return len;
  }

};

int main()
{
  Solution s;

  vector <int> A = {1,1,1,1,1,2,3,3,3,3,5,5,6};

  int size = s.removeDuplicatesII(A);

  cout<<size;

}
