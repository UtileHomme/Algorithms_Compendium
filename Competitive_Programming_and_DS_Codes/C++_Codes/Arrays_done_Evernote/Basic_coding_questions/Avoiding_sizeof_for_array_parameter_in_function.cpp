// https://www.geeksforgeeks.org/?p=6594

// https://ideone.com/chO4wQ

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
}
