// https://www.geeksforgeeks.org/?p=580

// Reference - https://www.youtube.com/watch?v=lBk6fVhuCyw

// https://ideone.com/AV0ojM

#include <iostream>

using namespace std;

int FindMissingNumber(int a[], int n)
{
  int i;
  int x1=a[0];
  int x2 = 1;


  for(i=1;i<n;i++)
  {
    x1 = x1^a[i];
  }

  for(i=2; i<=n+1;i++)
  {
    x2 = x2^i;
  }

  return (x1^x2);
}

int main()
{
    int a[] = {1,2,3,4,5,6,8};
    int missing_no = FindMissingNumber(a, 7);

    cout<<missing_no;

    return 0;
}

// Time Complexity = O(n)

/*

Note:: A^A = 0;

x1 ^ x2 means (a1 ^ a2 ^ a4) ^ (a1 ^ a2 ^ a3 ^ a4)) = (a1^a1) ^ (a2 ^ a2) ^ (a^3) ^ (a4 ^ a^4) = a3

*/
