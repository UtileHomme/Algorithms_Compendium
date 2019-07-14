// https://www.interviewbit.com/problems/counting-triangles/

// https://www.geeksforgeeks.org/find-number-of-triangles-possible/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  int countTriangles(vector <int> &A)
  {
    int n=A.size(),ans=0,md=pow(10,9)+7;

    if (n==0)
    {
      return ans;
    }

    sort(A.begin(),A.end());

    for(int k=n-1;k>1;k--)
    {
      int j=k-1,i=0;
      while(i<j)
      {
        if (A[i]+A[j]>A[k]){
          ans=(ans+(j-i)%md)%md;
          j--;
        }
        else
        {
          i++;
        }
      }
    }

    return ans;
  }
};

int main()
{
  vector <int> A = {10, 21, 22, 100, 101, 200, 300};

  Solution s;

  int k = s.countTriangles(A);

  cout<<k;
  return 0;
}
