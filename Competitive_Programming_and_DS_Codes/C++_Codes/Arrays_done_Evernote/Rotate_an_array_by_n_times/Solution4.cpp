// https://www.geeksforgeeks.org/program-for-array-rotation-continued-reversal-algorithm/

#include <iostream>

using namespace std;

void reverseArray(int a[], int start, int end)
{
  while(start<end)
  {
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    start++;
    end--;
  }
}

void Rotate(int a[], int len, int d)
{
  reverseArray(a, 0, d-1);
  reverseArray(a, d, len-1);
  reverseArray(a, 0, len-1);
}

int main()
{
  int a[] = {7,9,3,5,4,2,1};

  int len = sizeof(a)/sizeof(a[0]);

  int d = 3;

  Rotate(a, len, d);

  for(int i=0;i<len;i++)
  {
    cout<<a[i]<<" ";
  }

  return 0;
}

/*

Time Complexity = O(n)

Space Complexity = O(1)

*/
