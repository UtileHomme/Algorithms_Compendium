// http://www.geeksforgeeks.org/find-the-number-occurring-odd-number-of-times/

// https://ideone.com/hrgpJS

// Using XOR operator

#include <iostream>

using namespace std;

int getOddOccurrence(int a[], int size)
{
  int res = 0;

  for(int i=0;i<size;i++)
  {
    res = res ^ a[i];
  }

  return res;
}

int main()
{
  int a[] = {1,2,3,2,3,1,3};

  int len = sizeof(a)/sizeof(a[0]);

  cout<<getOddOccurrence(a,len);


  return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)

/*
Why this works:

XOR is associative. Now consider the above array:

XOR of 2 same numbers is 0; XOR of 0 and k is k

All pairs will cancel each other out and only the 1 element which is occuring odd number of times will
remain

*/
