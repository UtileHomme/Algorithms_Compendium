// https://www.geeksforgeeks.org/array-rotation/

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
  if(b==0)
  {
    return a;
  }
  else
  {
    return gcd(b, a%b);
  }
}

void Rotate(int a[], int len, int d)
{
  for(int i=0;i<gcd(d,len); i++)
  {
    int temp = a[i];
    int j = i;

    while(1)
    {
      int k = j+d;
      if(k>=len)
      {
        k = k-len;
      }

      if(k==i)
      {
        break;
      }

      a[j] = a[k];
      j = k;
    }

    a[j] = temp;
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

Space Complexity = O(1)

*/
