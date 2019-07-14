// https://www.geeksforgeeks.org/painters-partition-problem-set-2/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int getMax(vector <int> &A)
{
  int max = INT_MIN;

  for(int i=0;i<A.size();i++)
  {
    if(A[i]>max)
    {
      max = A[i];
    }
  }

  return max;
}

int getSum(vector <int> &A)
{
  int total = 0;

  for(int i=0;i<A.size();i++)
  {
    total += A[i];
  }

  return total;
}

//Find the minimum required painters for given maxLen
//which is the maximum length a painter can paint
int numberOfPainters(vector <int> A, int maxLen)
{
  int total = 0, numPainters = 1;

  for(int i=0;i<A.size();i++)
  {
    total += A[i];

    if(total>maxLen)
    {
      total = A[i];
      numPainters++;
    }
  }

  return numPainters;
}

int partition(vector <int> &A, int k)
{
  int low = getMax(A);
  int high = getSum(A);

  while(low<high)
  {
    int mid = low + (high-low)/2;

    int requiredPainters = numberOfPainters(A, mid);

    if(requiredPainters<=k)
    {
      high = mid;
    }
    else
    {
      low = mid + 1;
    }
  }

  return low;
}

int main()
{
  vector <int> A = { 10, 20, 30,40};

  int k = 3;

  cout<<partition(A,k);
  return 0;
}
