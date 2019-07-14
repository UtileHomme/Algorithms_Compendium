// https://www.geeksforgeeks.org/how-to-print-size-of-an-array-in-a-function-in-c/

// https://ideone.com/xrpLk6

#include <iostream>

using namespace std;

template <size_t n>

void findSize(int (&a)[n])
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
