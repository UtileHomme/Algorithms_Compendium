// https://www.interviewbit.com/problems/first-missing-integer/

// https://www.geeksforgeeks.org/?p=19419

#include <vector>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  //used for moving all negative numbers to the left
  int segregate(int a[], int size)
  {
    //this index stores the index for the last swapped negative number
    int j=0;

    for(int i=0;i<size;i++)
    {
      if(a[i]<=0)
      {
        swap(a[i], a[j]);
        j++;
      }
    }

    return j;
  }

  int firstMissingPositive(int a[], int size)
  {
    int i;

  // Mark arr[i] as visited by making arr[arr[i] - 1] negative. Note that
  // 1 is subtracted because index start from 0 and positive numbers start from 1
    for(i=0;i<size;i++)
    {
      if(abs(a[i])-1<size && a[abs(a[i])-1]>0)
      {
        a[abs(a[i])-1] = - a[abs(a[i])-1];
      }
    }

    // Return the first index value at which is positive
    for(i=0;i<size;i++)
    {
      if(a[i]>0)
      {
        return i+1;
      }
    }

    return size+1;
  }
};

int main()
{
  Solution s;

  int a[] = {-3, 10, 1, 3};

  int size = sizeof(a)/sizeof(a[0]);

  int l = s.segregate(a,size);
  int k = s.firstMissingPositive(a+l, size-l);

  cout<<k;
  return 0;
}
