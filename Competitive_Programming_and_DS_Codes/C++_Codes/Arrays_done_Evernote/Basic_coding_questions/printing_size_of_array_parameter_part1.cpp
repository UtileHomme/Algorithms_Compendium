// https://www.geeksforgeeks.org/how-to-print-size-of-an-array-in-a-function-in-c/

https://ideone.com/lrD8m8

#include <iostream>

using namespace std;

void findSize(int a[])
{
  cout<<sizeof(a)<<endl;
}

int main()
{
  int a[10];

  cout<<sizeof(a)<<" ";
  findSize(a);
  return 0;
}

/*

On the machine, the size of integer is 4 bytes and the size of pointer is 8 bytes

*/
