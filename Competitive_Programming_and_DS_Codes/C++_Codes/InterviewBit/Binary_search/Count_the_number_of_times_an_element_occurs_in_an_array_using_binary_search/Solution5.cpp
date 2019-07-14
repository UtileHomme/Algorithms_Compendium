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
    int low = 0;
    int high = A.size() - 1;

    int n = A.size();

    int index = binarySearch(A, low, high, B);

    if(index==-1)
    {
      return 0;
    }

    //count elements on the left side of the returned index value
    int cnt = 1;
    int left = index - 1;

    while(left>=0 && A[left] == B)
    {
      cnt++;
      left--;
    }

    //count elements on the right side of the returned index value
    int right = index + 1;

    while(right<n && A[right]==B)
    {
      cnt++;
      right++;
    }

    return cnt;
  }
};



int main()
{
  vector <int> A = {1,2,5,5,5,5,6,7,8,9,9};

  int k = 5;

  Solution s;

  int occurrenceCount = s.findCount(A, k);
  cout<<occurrenceCount;

  return 0;
}

// Time Complexity = O(logn + count)
