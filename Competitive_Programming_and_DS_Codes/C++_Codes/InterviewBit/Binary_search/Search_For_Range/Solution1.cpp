// https://www.interviewbit.com/problems/search-for-a-range/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

  vector <int> searchRange(const vector <int> &A, int B)
  {
    int len = A.size();
     int low = 0;
     int high = len-1;


     int firstOccurence=-1, lastOccurence=-1;

     while(low<=high)
     {
         int mid = low + (high - low)/2;

         if(A[mid]==B)
         {
             firstOccurence = mid;
             high = mid-1;
         }
         else if(A[mid]<B)
         {
             low = mid+1;
         }
         else
         {
             high = mid-1;
         }
     }

     int low1 = 0;
     int high1 = len - 1;

     while(low1<=high1)
     {
         int mid = low1 + (high1 - low1)/2;

         if(A[mid]==B)
         {
             lastOccurence = mid;
             low1 = mid+1;
         }
         else if(A[mid]<B)
         {
             low1 = mid+1;
         }
         else
         {
             high1 = mid-1;
         }
     }

     vector <int> K = {firstOccurence,  lastOccurence};

      return K;
  }
};



int main()
{
  vector <int> A = {1,2,5,5,5,5,6,7,8,9,9};

  int k = 5;

  Solution s;

  vector <int> B = s.searchRange(A, k);

  for(auto i:B)
  {
    cout<<i<<" ";
  }
  return 0;
}

// Time Complexity = O(log n)
