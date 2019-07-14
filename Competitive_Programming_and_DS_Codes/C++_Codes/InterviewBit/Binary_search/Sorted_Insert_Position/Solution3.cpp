// https://www.interviewbit.com/problems/sorted-insert-position/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int searchInsert(vector <int> &A, int B)
  {
      int low = 0;
      int high = A.size()-1;

      if(A.size()==0)
      {
        return 0;
      }

      while(low<=high)
      {
        int mid = low + (high-low)/2;

        if(A[mid]==B)
        {
          return mid;
        }
        else if(mid==0 && A[mid]>B)
        {
          return mid;
        }
        else if(mid==A.size()-1 && A[mid]<B)
        {
          return mid+1;
        }
        else if(A[mid-1]<B && A[mid]>B)
        {
          return mid;
        }

        if(A[mid]>B)
        {
          high = mid - 1;
        }
        else
        {
          low = mid + 1;
        }

      }
  }
};

int main()
{
  vector <int> A = {1,3,5,6};
  int B = 4;

  Solution s;
  int k = s.searchInsert(A, B);

  cout<<k;

  return 0;
}
