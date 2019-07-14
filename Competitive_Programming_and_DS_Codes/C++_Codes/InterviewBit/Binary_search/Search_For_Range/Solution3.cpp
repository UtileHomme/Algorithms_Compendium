// https://www.interviewbit.com/problems/search-for-a-range/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

  int leftlimit(const vector <int> &A, int B)
  {
    int n = A.size();
    int low = 0, high = n-1, mid;

    while(low<=high)
    {
      mid = low + (high - low)/2;

      if(A[mid]==B && (mid==0 || A[mid-1]!=B))
      {
        return mid;
      }
      else if(A[mid]>=B)
      {
        high = mid-1;
      }
      else
      {
        low = mid + 1;
      }
    }

    return -1;
  }

  int rightlimit(const vector <int> &A, int B)
  {
    int n = A.size();
    int low = 0, high = n-1, mid;

    while(low<=high)
    {
      mid = low + (high - low)/2;

      if(A[mid]==B && (mid==n-1 || A[mid+1]!=B))
      {
        return mid;
      }
      else if(A[mid]>B)
      {
        high = mid-1;
      }
      else
      {
        low = mid + 1;
      }
    }

    return -1;
  }

  vector <int> searchRange(const vector <int> &A, int B)
  {
    vector<int> ans;
   ans.push_back(leftlimit(A,B));
   ans.push_back(rightlimit(A,B));
   return ans;
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
