// https://www.interviewbit.com/problems/array-3-pointers/

// https://www.geeksforgeeks.org/find-three-closest-elements-from-given-three-sorted-arrays/

#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:

  int getClosest(int val1, int val2, int target)
  {
    if(target-val1 >= val2 - target)
    {
      return val2;
    }
    else
    {
      return val1;
    }
  }

  int findClosest(const vector <int> &A, int k)
  {
    int n = A.size();
    if(k<=A[0])
    {
      return A[0];
    }

    if(k>=A[n-1])
    {
      return A[n-1];
    }

    int i=0, j=n-1, mid=0;

    while(i<=j)
    {
      mid = i + (j-i)/2;

      if(A[mid]==k)
      {
        return A[mid];
      }

      // if target is less than mid element,
      // then search left
      if(A[mid]>k)
      {
        if(mid>0 && k>A[mid-1])
        {
          return getClosest(A[mid-1], A[mid],k);
        }

        j = mid;
      }

      // if target is more than mid element,
      // then search right
      else
      {
        if(mid<n-1 && k<A[mid+1])
        {
          return getClosest(A[mid], A[mid+1], k);
        }

        i = mid+1;
      }
    }

    return A[mid];
  }

  int minimize(const vector<int> &A, const vector <int> &B, const vector <int> &C)
  {
    int mindiff;
    int firstdiff = INT_MAX;
    int seconddiff = INT_MAX;
    int thirddiff = INT_MAX;

    for(int i=0;i<A.size();i++)
    {
      int target = A[i];
      int closestinB = findClosest(B,target);
      int closestinC = findClosest(C,target);

      mindiff = max(abs(target-closestinB),max(abs(closestinB-closestinC),abs(closestinC-target)));
      if(mindiff<firstdiff)
      {
        firstdiff=mindiff;
      }
    }

    for(int i=0;i<B.size();i++)
    {
      int target = B[i];
      int closestinA = findClosest(A,target);
      int closestinC = findClosest(C,target);

      int mindiff = max(abs(target-closestinA),max(abs(closestinA-closestinC),abs(closestinC-target)));
      if(mindiff<seconddiff)
      {
        seconddiff=mindiff;
      }
    }

    for(int i=0;i<C.size();i++)
    {
      int target = C[i];
      int closestinB = findClosest(B,target);
      int closestinA = findClosest(A,target);

      mindiff = max(abs(target-closestinB),max(abs(closestinB-closestinA),abs(closestinA-target)));
      if(mindiff<thirddiff)
      {
        thirddiff=mindiff;
      }
    }

    int minimum = min(firstdiff, min(seconddiff, thirddiff));

    return minimum;


  }
};


int main()
{
  Solution s;

  vector <int> A = {20, 24, 100};
  vector <int> B = {2, 19, 22, 79, 800};
  vector <int> C = {10, 12, 23, 24, 119};

  int k = s.minimize(A, B, C);

  cout<<k;

}
