// https://www.geeksforgeeks.org/?p=134679

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int pairInSortedRotated(vector <int> A, int sum)
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

  int cnt=0;

  while(low!=high)
  {
    if(A[low]+A[high]==sum)
    {
      cnt++;

      cout<<low<<" "<<high<<endl;

      //check if the low and high have met
      if(low==(high-1+n)%n)
      {
        return cnt;
      }

      low = (low+1)%n;
      high = (high - 1 + n)%n;
    }

    else if(A[low] + A[high]<sum)
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

  return cnt;
}


int main()
{
  vector <int> A = {11, 15, 6, 7, 9, 10};

  int sum = 16;

  int k = pairInSortedRotated(A,sum);

  cout<<k;

  return 0;
}
