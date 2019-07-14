// https://www.interviewbit.com/problems/count-element-occurence/

// https://www.geeksforgeeks.org/count-number-of-occurrences-or-frequency-in-a-sorted-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

  int findCount(const vector <int> &A, int B)
  {
    int len = A.size();

    int cnt = 0;
    for(int i=0;i<len;i++)
    {
      if(A[i]==B)
      {
      cnt++;
      }
    }

    return cnt;
  }
};



int main()
{
  vector <int> A = {1,2,5,5,5,5,6,7,8,9,9};

  int k = 9;

  Solution s;

  int occurrenceCount = s.findCount(A, k);
  cout<<occurrenceCount;

  return 0;
}

// Time Complexity = O(n)
