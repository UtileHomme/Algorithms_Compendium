// https://www.geeksforgeeks.org/?p=6873

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printUnion(vector <int> A, vector <int> B)
{
  int m = A.size();
  int n = B.size();

  vector <int> C;

  int i=0, j=0;

  bool a = true;

  while(i<m && j<n)
  {
    if(A[i]<B[j])
    {
      C.push_back(A[i]);
      i++;
    }
    else if(A[i]>B[j])
    {
      C.push_back(B[j]);
      j++;
    }
    else
    {
      C.push_back(A[i]);
      i++;
      j++;

      while(a==true)
      {
        a = false;

        //if the next element in the first array is same as the previous
        // C.back() checks for the last element because it was the one pushed last
        if(A[i]==C.back())
        {
          i++;
          a = true;
        }

        if(B[j]==C.back())
        {
          j++;
          a = true;
        }
      }
    }
  }

  // Print the remaining elements of the larger array
  while(i<m)
  {
    C.push_back(A[i]);
    i++;
  }

  while(j<n)
  {
    C.push_back(B[j]);
    j++;
  }

  for(int i=0;i<C.size();i++)
  {
    cout<<C[i]<<" ";
  }
}

int main()
{
  vector <int> A = {1,4,4,4,4,4,4,4,4,6,8,9,10};
  vector <int> B = {2,4,4,4,6,8,10};

  printUnion(A,B);
  return 0;
}
