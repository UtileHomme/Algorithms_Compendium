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
     int start = -1, end = -1;

     //finding first occurence

     while(low<high)
     {
       int mid = (low+high)/2;
       if(A[mid]<B)
       {
         low = mid+1;
       }
       else
       {
         high = mid;
       }
     }

     if(A[low]!=B)
     {
       return 0;
     }

     start = high;

     // finding last occurence

     high = len-1;

     while(low<high)
     {
       int mid = (low+high)/2 + 1;
       if(A[mid]>B)
       {
         high = mid-1;
       }
       else
       {
         low = mid;
       }
     }

     end = low;

     if(A.size()==1)
     {
         return 1;
     }
     if(start==-1 || end==-1)
     {
         return 0;
     }

     int count = end - start + 1;

     return count;
  }
};



int main()
{
  vector <int> A = {1,2,5,5,5,5,6,7,8,9,9};

  int k = 9;

  Solution s;

  int occurrenceCount = s.findCount(A, k);
  cout<<occurrenceCount;

  return 0;
}

// Time Complexity = O(log n)
