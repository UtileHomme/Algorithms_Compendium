<!-- https://www.geeksforgeeks.org/?p=6594 -->
<!-- Reference - https://www.geeksforgeeks.org/why-c-treats-array-parameters-as-pointers/ -->

<!--
#include <iostream>

using namespace std;

void func(int a[],int size)
{

  for(int i=0;i<size;i++)
  {
    a[i]= i;
  }
}

int main()
{
  int a[4] = {0,0,0,0};

  int size = sizeof(a)/sizeof(a[0]);
  func(a,size);

  for(int i=0;i<size;i++)
  {
    cout<<a[i]<<" ";
  }


  return 0;
} -->

- The function "func" receives array parameters and tries to find out number of elements in a[] using "sizeof" operator
- In C++, array parameters are treated as pointers because of efficiency
- it is inefficient to copy the array data in terms of memory and time 

- So, the expression "size(a)/sizeof(a[0])" becomes sizeof(int *)/sizeof(int) which results in "1" (Size of int and int* is 4)

- it is better to pass the size of array as the function parameter
