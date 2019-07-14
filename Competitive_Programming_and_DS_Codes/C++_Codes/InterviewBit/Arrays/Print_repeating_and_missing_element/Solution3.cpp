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
    vector <int> B;

    sort(A.begin(), A.end());


    int pos = 0;
    int sum = 0;

    int size = A.size();

    int i;
    for(i=0;i<A.size();i++)
    {
      if(i!=A.size()-1)
      {
      if(A[i]==A[i+1])
      {
        pos = i+1;
        B.push_back(A[i]);
      }
      }

    if(pos-1==i)
    {
      continue;
    }
    else
    {
      sum += A[i];
    }
    }

    int actualSum = ((size)*(size+1))/2;

    int missingElement = actualSum - sum;

    B.push_back(missingElement);
   return B;
  }

};

int main()
{

  vector <int> A = {1, 3, 5, 2, 4, 2};

  Solution s;

  vector <int> B = s.repeatedAndMissingNumber(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

  return 0;
}

// Time Complexity = O(nlog n)
