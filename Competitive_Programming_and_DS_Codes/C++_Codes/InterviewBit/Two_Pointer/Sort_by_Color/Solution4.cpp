// https://www.interviewbit.com/problems/sort-by-color/

// https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  void sortColors(vector <int> &A)
  {
    int low = 0;

    int mid = 0;

    int high = A.size()-1;

    while(mid<=high)
    {
      switch(A[mid])
      {
        case 0:
        swap(A[low], A[mid]);
        low++;
        mid++;
        break;

        case 1:
        mid++;
        break;

        case 2:
        swap(A[mid], A[high]);
        high--;
        break;
      }
    }

  }
};

int main()
{
  Solution s;

  vector <int> A = {0,1,2,0,2,1,1,0,1};

  s.sortColors(A);

  for(int i=0;i<A.size();i++)
  {
    cout<<A[i]<<" ";
  }
}
