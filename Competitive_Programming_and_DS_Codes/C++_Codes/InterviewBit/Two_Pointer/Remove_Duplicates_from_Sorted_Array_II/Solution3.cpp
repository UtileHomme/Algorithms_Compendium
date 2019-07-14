// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int removeDuplicatesII(vector <int> &A)
  {
    if(A.size()==1)
    {
      return 1;
    }
    else if(A.size()==2)
    {
      return A.size();
    }

    int n = A.size();

    int c=0;

    for(int i=n-1;i>0;i--)
    {
      if(A[i]==A[i-1])
      {
        //if the element matches the first time
        if(c==0)
        {
          c=1;
        }
        //if matches the second time
        else
        {
          //removes the element at this position
          A.erase(A.begin()+i);

          n--;
        }
      }
      //if it doesn't match set c=0
      else
      {
        c=0;
      }
    }

    return n;
  }

};

int main()
{
  Solution s;

  vector <int> A = {1,1,1,1,1,2,3,3,3,3,5,5,6};

  int size = s.removeDuplicatesII(A);

  cout<<size;

}
