// https://www.geeksforgeeks.org/c-function-argument-return-values/

#include <iostream>

using namespace std;

int function(int, int[]);

int main()
{
  int a =20;

  int arr[5] = {10,20,30,40,50};

  a = function(a, &arr[0]);

  cout<<"a "<<a<<endl;

  for(int i=0;i<5;i++)
  {
    cout<<"Value of index "<<i<<" is "<<arr[i]<<endl;
  }

  return 0;
}

int function(int a, int *arr)
{

  a = a + 20;
  arr[0] = arr[0] + 50;
  arr[1] = arr[1] + 50;
  arr[2] = arr[2] + 50;
  arr[3] = arr[3] + 50;
  arr[4] = arr[4] + 50;
  return a;

}
