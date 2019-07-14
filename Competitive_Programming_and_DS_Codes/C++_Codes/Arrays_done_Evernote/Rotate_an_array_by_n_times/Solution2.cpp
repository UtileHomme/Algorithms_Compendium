// https://www.geeksforgeeks.org/array-rotation/

#include <iostream>

using namespace std;

void leftRotatebyOne(int a[], int len)
{
  int temp = a[0];

  int i;
  for(i=0;i<len-1;i++)
  {
    a[i] = a[i+1];
  }

  a[i] = temp;
}

void Rotate(int a[], int len, int d)
{
  for(int i=0;i<d;i++)
  {
    leftRotatebyOne(a, len);
  }

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

Time Complexity = O(n*d)

Space Complexity = O(1)

*/
