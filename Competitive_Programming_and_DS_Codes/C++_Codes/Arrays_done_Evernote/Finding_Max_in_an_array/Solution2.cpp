// https://www.geeksforgeeks.org/?p=142432

// https://ideone.com/HP3JMm

#include <bits/stdc++.h>

using namespace std;

int largest(int a[], int n)
{
  return *max_element(a, a+n);
}

int main()
{
  int a[] = {10,324,45, 90, 9808};
  int n = sizeof(a)/sizeof(a[0]);

  cout<<"Largest element is "<<largest(a,n);
  return 0;
}

// Time Complexity = O(n)
