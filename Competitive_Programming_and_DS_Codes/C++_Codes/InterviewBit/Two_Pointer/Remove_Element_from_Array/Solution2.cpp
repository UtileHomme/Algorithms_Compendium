// https://www.interviewbit.com/problems/remove-element-from-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int removeElement(vector <int> &A, int B)
  {
    int size = A.size();

    int k = 0;

    for(int i=0;i<size;i++)
    {
      if(A[i]!=B)
      {
        swap(A[i], A[k]);
        k++;
      }
    }

    A.resize(k);

    return A.size();
  }
};

int main()
{
  Solution s;

  vector <int> A = {2,3,1,5,4,2,3,2,7,2,1};

  int k = 2;

  int len = s.removeElement(A, k);

  cout<<len;

  return 0;
}
