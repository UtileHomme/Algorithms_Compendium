// https://www.interviewbit.com/problems/search-for-a-range/

// https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <int> searchRange(const vector <int> &A, int B)
  {
    int first = -1, last = -1;

    for(int i=0;i<A.size();i++)
    {
      if(A[i]!=B)
      {
        continue;
      }

      if(first==-1)
      {
        first = i;
      }
      else
      {
        last = i;
      }
    }

    vector <int> ans;

    ans.push_back(first);
    ans.push_back(last);

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
