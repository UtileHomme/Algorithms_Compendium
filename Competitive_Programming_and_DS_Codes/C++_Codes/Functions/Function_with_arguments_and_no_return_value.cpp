// https://www.geeksforgeeks.org/c-function-argument-return-values/

#include <iostream>

using namespace std;

void function(int, int[], char[]);

int main()
{
  int a = 20;
  int ar[5] = { 10, 20, 30, 40, 50 };
  char str[30] = "geeksforgeeks";
  function(a, &ar[0], &str[0]);
  return 0;
}

void function(int a, int *ar, char *str)
{

  cout<<"a "<<a<<endl;

  cout<<endl;

  for(int i=0;i<5;i++)
  {
    cout<<"Value of index "<<i<<" is "<<ar[i]<<endl;
  }

  cout<<endl;

  cout<<"string is "<<str;
}
