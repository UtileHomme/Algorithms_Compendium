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
        else if(A[mid]<B)
        {
          low = mid + 1;
        }
        else
        {
          high = mid - 1;
        }
      }

      //the element is lower than the first element
      if(low==0)
      {
        return 0;
      }
      //the element is higher than the last element
      else if(high==A.size()-1)
      {
        return high + 1;
      }

      //the element is to be inserted between two elements
      if(low>high)
      {
        return low;
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
