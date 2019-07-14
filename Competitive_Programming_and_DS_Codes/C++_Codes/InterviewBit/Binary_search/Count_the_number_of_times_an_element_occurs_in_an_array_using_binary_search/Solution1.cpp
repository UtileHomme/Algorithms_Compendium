// https://www.interviewbit.com/problems/count-element-occurence/

#include <iostream>

using namespace std;

int Occurrence_BS(int a[], int len, int k, bool typeOfOccurrence)
{
  int low = 0;

  int high = len - 1;

  int result = -1;

  while(low<=high)
  {
    int mid = low + (high-low)/2;

    if(a[mid]==k)
    {
      result = mid;

      if(typeOfOccurrence)
      {
        high = mid-1;
      }
      else
      {
        low = mid+1;
      }
    }
    else if (a[mid]<k)
    {
      low = mid+1;
    }
    else
    {
      high = mid-1;
    }
  }

  return result;
}

int main()
{
  int a[] = {1,2,5,5,5,5,6,7,8,9,9};


  int len = sizeof(a)/sizeof(a[0]);

  int k = 5;

  int firstoccurence = Occurrence_BS(a, len, k, true);

  int lastoccurence = Occurrence_BS(a, len, k, false);

  int cnt = lastoccurence-firstoccurence + 1;

  cout<<"No of occurrences are "<<cnt;

}

// Time Complexity = O(log n)
