// https://www.interviewbit.com/problems/search-for-a-range/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

  vector <int> searchRange(const vector <int> &A, int B)
  {
    int len = A.size();
    int low = 0;
    int high = len-1;

    vector <int> K(2,-1);

    while(low<high)
    {
      int m = low + (high - low)/2;

      if(A[m]<B)
      {
        low = m + 1;
      }
      //this is for resetting the high index so that the search range changes
      else
      {
        high = m;
      }
    }

    if(A[low]!=B)
    {
      return K;
    }
    else
    {
      K[0] = low;
    }

    high = len - 1;

    while(low<high)
    {
      //this to make the 'mid' go to the right else we'll have a repeating mid
      int m = low + (high - low)/2 + 1;

      if(A[m]>B)
      {
        high = m - 1;
      }
      //this is for resetting the low index so that the search range changes
      else
      {
        low = m;
      }
    }

    K[1] = high;

    return K;
  }
};



int main()
{
  vector <int> A = {1,2,5,5,5,5,6,7,8,9,9};

  int k = 5;

  Solution s;

  vector <int> B = s.searchRange(A, k);

  for(auto i:B)
  {
    cout<<i<<" ";
  }
  return 0;
}
