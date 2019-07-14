// https://www.youtube.com/watch?v=OE7wUUpJw6I&list=PL2_aWCzGMAwL3ldWlrii6YeLszojgH77j&index=5&t=0s

#include <iostream>

using namespace std;

int main()
{
  int a[] = {1,2,5,5,5,5,6,7,8,9,9};

  int low = 0;

  int result = -1;

  int len = sizeof(a)/sizeof(a[0]);

  int high = len - 1;

  int k = 5;

  while(low<=high)
  {
    int mid = low + (high-low)/2;

    if(a[mid]==k)
    {
      result = mid;
      low = mid+1;
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

  cout<<"The last occurrence is position "<<result+1;
}

// Time Complexity = O(log n)
