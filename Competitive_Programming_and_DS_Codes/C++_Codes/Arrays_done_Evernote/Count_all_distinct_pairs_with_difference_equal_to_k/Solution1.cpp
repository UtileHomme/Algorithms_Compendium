// https://www.geeksforgeeks.org/count-pairs-difference-equal-k/

//Doesn't handle the duplicate case

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countPairsWithDiffk(vector <int> A, int k)
{
  int count = 0;

  for(int i=0; i<A.size()-1; i++)
  {
    for(int j = i+1; j<A.size(); j++)
    {
      if(A[i]-A[j] == k || A[j]-A[i]==k)
      {
        count++;
      }
    }
  }

  return count;
}

int main()
{
  vector <int> A = {1,5,3,4,2};

  int k = 3;

  int cnt = countPairsWithDiffk(A,k);

  cout<<cnt;
  return 0;
}
