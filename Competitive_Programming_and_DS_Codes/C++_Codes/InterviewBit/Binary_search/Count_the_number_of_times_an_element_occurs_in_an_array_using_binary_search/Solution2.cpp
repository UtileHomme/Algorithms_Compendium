// https://www.interviewbit.com/problems/count-element-occurence/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:

  int findCount(const vector <int> &A, int B)
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

     if(A.size()==1)
     {
         return 1;
     }
     if(firstOccurence==-1 || lastOccurence==-1)
     {
         return 0;
     }



     int count = lastOccurence - firstOccurence + 1;

     return count;
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

// Time Complexity = O(log n)
