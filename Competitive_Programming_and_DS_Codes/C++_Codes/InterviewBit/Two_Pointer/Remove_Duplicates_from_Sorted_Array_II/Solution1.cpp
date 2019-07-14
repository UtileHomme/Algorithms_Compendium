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

    int count=0;

    int size = A.size();

    //if any set has more than two same elements we only take the last two occurences
    for(int i=0;i<size;i++)
    {
      if(i<size-2 && A[i]==A[i+1] && A[i]==A[i+2])
      {
        continue;
      }
      else
      {
        A[count]= A[i];
        count++;
      }
    }

    return count;
  }

};

int main()
{
  Solution s;

  vector <int> A = {1,1,1,1,1,2,3,3,3,3,5,5,6};

  int size = s.removeDuplicatesII(A);

  cout<<size;

}
