// https://www.geeksforgeeks.org/?p=123493

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void pushZeroesToEnd(vector <int> &A)
{
  int count = 0;

  //first count the non-zero elements and keep on updating them at the starting positions
  for(int i=0;i<A.size();i++)
  {
    if(A[i]!=0)
    {
      A[count]=A[i];
      count++;
    }
  }

  //Now that all non-zero numbers have been accounted for
  //the remaining positions need to be filled with zeroes
  while(count<A.size())
  {
    A[count] = 0;
    count++;
  }
}

int main()
{

  vector <int> A = {1,9,8,4,0,0,2,7,0,6,0,9};

  pushZeroesToEnd(A);

  for(int i=0;i<A.size();i++)
  {
    cout<<A[i]<<" ";
  }

  return 0;
}
