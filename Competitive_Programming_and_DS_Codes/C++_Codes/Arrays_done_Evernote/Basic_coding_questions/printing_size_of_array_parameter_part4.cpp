// https://www.geeksforgeeks.org/how-to-print-size-of-an-array-in-a-function-in-c/

// https://ideone.com/jud9zS

#include <iostream>

using namespace std;

template <typename T, size_t n>

void findSize(T (&a)[n])
{
  cout<<sizeof(T)*n<<endl;
}

int main()
{
  int a[10];

  cout<<sizeof(a)<<" ";
  findSize(a);

  float f[20];
  cout<<sizeof(f)<<" ";
  findSize(f);
  return 0;
}

/*

On the machine, the size of integer is 4 bytes and the size of pointer is 8 bytes

*/
