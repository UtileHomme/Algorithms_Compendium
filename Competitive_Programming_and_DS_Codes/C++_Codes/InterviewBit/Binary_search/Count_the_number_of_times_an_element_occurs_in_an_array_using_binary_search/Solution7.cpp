// https://www.interviewbit.com/problems/count-element-occurence/

// https://www.geeksforgeeks.org/count-number-of-occurrences-or-frequency-in-a-sorted-array/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

  int binarySearch(const vector<int> &A, int low, int high, int B)
  {
    if(low>high)
    {
      return -1;
    }

    int mid = low + (high - low)/2;

    if(A[mid]==B)
    {
      return mid;
    }

    if(A[mid]>B)
    {
      return binarySearch(A, low, mid - 1, B);
    }
    else
    {
      return binarySearch(A, mid + 1, high, B);
    }
  }

  int findCount(const vector <int> &A, int B)
  {
    int pos = binarySearch(A, 0, A.size(), B);

    if(pos==-1)
    {
      return 0;
    }
    else
    {
      int i=pos-1, j=pos+1;

      //count the number of occurences from both sides of mid
      while(i>-1 && A[i]==A[pos])
      {
        i--;
      }
      while(j<A.size() && A[j]==A[pos])
      {
        j++;
      }

      return j-i-1;
    }
  }
};



int main()
{
  vector <int> A = {1,2,5,5,5,5,6,7,8,9,9};

  int k = 2;

  Solution s;

  int occurrenceCount = s.findCount(A, k);
  cout<<occurrenceCount;

  return 0;
}

// Time Complexity = O(logn)
