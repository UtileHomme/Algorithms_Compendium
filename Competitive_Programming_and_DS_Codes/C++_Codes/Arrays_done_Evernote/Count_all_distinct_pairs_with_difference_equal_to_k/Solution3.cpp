// https://www.geeksforgeeks.org/count-pairs-difference-equal-k/

//Handles the duplicate case

#include <iostream>
#include <bits/stdc++.h>
#define MAX 10000

using namespace std;


int countPairsWithDiffk(vector <int> A, int k)
{
  int count = 0;

  bool hashmap[MAX] = {false};

  for(int i=0; i<A.size();i++)
  {
    hashmap[A[i]]=true;
  }

  for(int i=0;i<A.size();i++)
  {
    int x = A[i];

    if(x-k>=0 && hashmap[x-k])
    {
      count++;
    }
    if (x+k<INT_MAX && hashmap[x+k])
    {
      count++;
    }
    hashmap[x] = false;

  }

  return count;
}

int main()
{
  vector <int> A = {1,5,3,4,2,1};

  int k = 3;

  int cnt = countPairsWithDiffk(A,k);

  cout<<cnt;
  return 0;
}
