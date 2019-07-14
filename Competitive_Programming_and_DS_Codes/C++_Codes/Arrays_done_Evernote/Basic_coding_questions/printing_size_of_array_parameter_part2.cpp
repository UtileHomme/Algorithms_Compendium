// https://www.geeksforgeeks.org/how-to-print-size-of-an-array-in-a-function-in-c/

// https://ideone.com/ShvceK

#include <iostream>

using namespace std;

//not a good way to declare size
void findSize(int (&a)[10])
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
