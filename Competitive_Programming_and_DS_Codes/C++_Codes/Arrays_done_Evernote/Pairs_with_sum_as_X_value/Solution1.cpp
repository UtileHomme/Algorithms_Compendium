// https://www.geeksforgeeks.org/?p=484

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    bool hasPairSum(vector <int> &A, int k)
    {
      int n = A.size();
      sort(A.begin(), A.end());

      int l = 0, r = n-1;

      while(l<r)
      {
        if(A[l] + A[r]==k)
        {
          return true;
        }
        else if(A[l] + A[r] < k)
        {
          l++;
        }
        else
        {
          r--;
        }
      }

      return false;
    }
};

int main()
{
  vector <int> A = {1, 4, 45, 6, 10, -8};

  int k = 49;

  Solution s;
  bool l = s.hasPairSum(A, k);

  cout<<l;

  return 0;
}
