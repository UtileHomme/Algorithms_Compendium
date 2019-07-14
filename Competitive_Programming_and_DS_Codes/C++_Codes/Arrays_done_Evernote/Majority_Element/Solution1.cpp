// https://www.geeksforgeeks.org/majority-element/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findMajority(vector <int> &A)
{
  int maxCount = 0;
  int index = -1;

  for(int i=0;i<A.size();i++)
  {
    int cnt = 0;

    for(int j=0;j<A.size();j++)
    {
      if(A[i]==A[j])
      {
        cnt++;
      }
    }

    if(cnt>maxCount)
    {
      maxCount = cnt;
      index = i;
    }
  }

  if(maxCount>A.size()/2)
  {
    cout<<A[index]<<endl;
  }
  else
  {
    cout<<"No Majority Element"<<endl;
  }
}

int main()
{
  vector <int> A = {5, 5, 2, 5, 3, 5, 1};

  findMajority(A);

  return 0;
}
