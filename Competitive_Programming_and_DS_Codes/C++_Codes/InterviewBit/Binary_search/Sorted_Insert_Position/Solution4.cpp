// https://www.interviewbit.com/problems/sorted-insert-position/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int binary(int low, int high, int key, vector <int> &A)
  {
    int mid = low + (high - low)/2;

    if(low <= high){
      if(key > A[mid]){
          low = mid+1;
          return binary(low, high, key, A);
      }
      else if(key < A[mid]){
          high = mid-1;
          return binary(low, high, key, A);
      }
  }
  else{
      if(key == A[mid]){
          return mid;
      }
      else if(key > A[mid]){
          return mid+1;
      }
      else if(key < A[mid]){
          return mid;
      }
  }
  return mid;

  }
  int searchInsert(vector <int> &A, int B)
  {
    int high = A.size()-1;
    int low = 0;

    int pos = 0;

    int key = B;

    if(A[high]<key)
    {
      return A.size();
    }
    else if(A[0]>key)
    {
      return 0;
    }
    else
    {
      pos = binary(low, high, key, A);
    }

    return pos;
  }
};

int main()
{
  vector <int> A = {1,3,5,6};
  int B = 4;

  Solution s;
  int k = s.searchInsert(A, B);

  cout<<k;

  return 0;
}
