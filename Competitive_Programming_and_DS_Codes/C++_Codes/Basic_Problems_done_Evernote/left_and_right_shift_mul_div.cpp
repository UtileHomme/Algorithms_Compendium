// https://www.geeksforgeeks.org/interesting-facts-bitwise-operators-c/

#include <iostream>

using namespace std;

int main()
{
  int x = 19;

  cout<<"Left shift (multiplication)"<<endl;
  cout<<(x<<1)<<endl;

  cout<<"Right shift (division)"<<endl;
  cout<<(x>>1)<<endl;
  return 0;
}
