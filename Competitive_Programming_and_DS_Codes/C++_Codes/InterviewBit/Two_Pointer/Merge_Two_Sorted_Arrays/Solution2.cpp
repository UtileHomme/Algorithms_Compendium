// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

// O(1) space

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  bool checkGreater(int A, int B)
  {
    if(A>B)
    {
      return true;
    }

    return false;
  }

  void mergeSortedArrays(vector <int> &A, vector <int> &B)
  {
    int i=0, j=0;

    while((i<A.size()) && (j<B.size()))
    {
      //if the element in the first array is more than the second array element
      // insert the second array element else move to the next element in A
      bool check = checkGreater(A[i], B[j]);

      //if A[i]>B[j]
      if(check)
      {
        //insert B[j] in "A" at the position of index "i"

        // https://www.geeksforgeeks.org/vector-insert-function-in-c-stl/
        A.insert(A.begin()+i, B[j]);
        i++;
        j++;
      }
      else
      {
        i++;
      }
    }

    while(j!=B.size())
    {
      A.push_back(B[j]);
      j++;
    }


    for(int i=0;i<A.size();i++)
    {
      cout<<A[i]<<" ";
    }
  }
};

int main()
{
  Solution s;

  vector <int> A = {1,3,5,7};

  vector <int> B = {2,4,6,8};

  s.mergeSortedArrays(A,B);

  return 0;
}
