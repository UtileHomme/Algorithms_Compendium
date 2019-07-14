// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

// O(m+n) space

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  void mergeSortedArrays(int *A, int sizeA, int *B, int sizeB)
  {
    int temp[sizeA+sizeB+2];

    int indexA = 0, indexB = 0;

    for(int i=0;i<sizeA+sizeB;i++)
    {
      //if we have already reached the end of "B" or the element in "A"
      //is less than "B"
      if(indexB==sizeB || (indexA<sizeA && A[indexA]<B[indexB]))
      {
        temp[i] = A[indexA];
        indexA++;
      }
      else
      {
        temp[i] = B[indexB];
        indexB++;
      }
    }

    for(int i=0;i<sizeA+sizeB;i++)
    {
      A[i] = temp[i];
    }

    return;
  }
};

int main()
{
  Solution s;

  int A[] = {1,3,5,7};

  int sizeA = sizeof(A)/sizeof(A[0]);

  int B[] = {2,4,6,8};

  int sizeB = sizeof(B)/sizeof(B[0]);

  s.mergeSortedArrays(A, sizeA, B, sizeB);

  for(int i=0;i<sizeA+sizeB;i++)
  {
    cout<<A[i]<<" ";
  }

  return 0;
}
