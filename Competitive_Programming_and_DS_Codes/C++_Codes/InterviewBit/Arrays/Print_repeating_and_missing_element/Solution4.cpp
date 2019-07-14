// https://www.interviewbit.com/courses/1/topics/2/problems/repeat-and-missing-number-array/previous_submissions/

// https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
  vector <int> repeatedAndMissingNumber(vector <int> &A)
  {
    int i;

    vector <int> B;

    for(i=0;i<A.size();i++)
    {
      if(A[abs(A[i])-1]>0)
      {
        A[abs(A[i])-1] = -A[abs(A[i])-1];
      }
      else
      {
        B.push_back(abs(A[i]));
      }
    }

    for(int i=0;i<A.size();i++)
    {
      if(A[i]>0)
      {
        B.push_back(i+1);
      }
    }
   return B;
  }

};

int main()
{

  vector <int> A = {1, 2, 5, 4,2};

  Solution s;

  vector <int> B = s.repeatedAndMissingNumber(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

  return 0;
}

// Time Complexity = O(n)
