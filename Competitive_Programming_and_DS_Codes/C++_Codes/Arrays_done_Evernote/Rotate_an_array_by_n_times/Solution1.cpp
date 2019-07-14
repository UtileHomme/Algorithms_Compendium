// https://www.geeksforgeeks.org/array-rotation/

#include <iostream>

using namespace std;

void Rotate(int a[], int len, int d)
{
  int temp[d];

  for(int i=0;i<d;i++)
  {
    temp[i] = a[i];
  }


  for(int i=0;i<len-d;i++)
  {
    a[i] = a[i+d];
  }


  int k=d-1;
  for(int i=len-1;i>=len-d;i--)
  {
    a[i] = temp[k];
    k--;
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

Time Complexity = O(n)

Space Complexity = O(d)

*/
