// https://www.geeksforgeeks.org/find-closest-number-array/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void findClosest(vector <int> &A, int k)
{
  int diff = INT_MAX;
  int pos = 0;

  for(int i=0;i<A.size();i++)
  {
    int mindiff = abs(A[i]-k);

    if(mindiff<diff)
    {
      diff = mindiff;
      pos = i;
    }
  }
  cout<<A[pos];
}

int main()
{
 vector <int> A = {2, 5, 6, 7, 8, 8, 9};

 int k = 4;
 findClosest(A,k);

 return 0;
}
