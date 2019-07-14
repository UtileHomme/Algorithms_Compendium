// https://www.geeksforgeeks.org/count-smaller-equal-elements-sorted-array/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearchCount(vector <int> A, int k)
{
  int low = 0, high = A.size()-1;

  int mid;

  while(low<=high)
  {
    mid = low + (high-low)/2;

    if(A[mid]==k)
    {
      // if duplicates are present it returns the position of the last element
      while(A[mid+1]==k && mid+1<A.size())
      {
        mid++;
      }
      break;
    }

    else if(A[mid]<k)
    {
      low = mid+1;
    }
    else
    {
      high = mid-1;
    }
  }

  // if the key is lesser than the smallest element
  while(A[mid]>k)
  {
    mid--;
  }

  return mid+1;
}

int main()
{
  vector <int> A = {1,2,4,5,8,10};

  int key = 7;

  cout<<binarySearchCount(A,key);

  return 0;
}
