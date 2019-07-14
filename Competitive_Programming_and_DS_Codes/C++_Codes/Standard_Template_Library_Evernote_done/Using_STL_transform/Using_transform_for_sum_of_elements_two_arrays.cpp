// https://www.geeksforgeeks.org/transform-c-stl-perform-operation-elements/

/*

NORMAL WAY

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int arr1[] = {1,2,3};
int arr2[] = {4,5,6};

int n = sizeof(arr1)/sizeof(arr1[0]);

int res[n];

for(int i=0;i<n;i++)
{
res[i] = arr1[i] + arr2[i];
}

for(int i=0;i<3;i++)
{
cout<<res[i]<<" ";
}
}

*/

// Using transform() in STL to add arrays in single line

/*
transform(Iterator inputBegin1, Iterator inputEnd1,
         Iterator inputBegin2, Iterator OutputBegin,
         binary_operation)
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int arr1[]= {1,2,3};
  int arr2[]= {4,5,6};

  int n = sizeof(arr1)/sizeof(arr1[0]);

  int res[n];

  transform(arr1, arr1+n, arr2, res, plus<int>());

  for(int i=0;i<n;i++)
  {
    cout<<res[i]<<" ";
  }
}
