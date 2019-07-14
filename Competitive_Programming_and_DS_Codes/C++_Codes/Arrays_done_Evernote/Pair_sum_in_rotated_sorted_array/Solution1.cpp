// https://www.geeksforgeeks.org/?p=134679

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

bool pairInSortedRotated(vector <int> A, int sum)
{
  int pivot;

  int n = A.size();

  for(int i=0;i<A.size()-1;i++)
  {
    if(A[i]>A[i+1])
    {
      pivot = i;
      break;
    }
  }

  int low = (pivot+1)%n;
  int high = pivot;

  while(low!=high)
  {
    if(A[low]+A[high]==sum)
    {
      cout<<low<<" "<<high<<endl;
      return true;
    }

    if(A[low] + A[high]<sum)
    {
      //to go through all indexes once we reach the length of the array
      low = (low+1)%n;
    }
    else
    {
      //to go through all indexes once we reach the length of the array
      high = (n + high - 1)%n;
    }
  }

  return false;
}


int main()
{
  vector <int> A = {15,23,6,8,10,14};

  int sum = 20;

  if(pairInSortedRotated(A,sum))
  {
    cout<<"Yes";
  }
  else
  {
    cout<<"No";
  }

  return 0;
}
