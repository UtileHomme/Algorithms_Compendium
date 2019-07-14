// https://www.geeksforgeeks.org/interesting-facts-bitwise-operators-c/

#include <iostream>

using namespace std;

int main()
{
  int x = 2, y=5;

  cout<<"Bitwise Operators"<<endl;
  (x & y)? cout<<"True" : cout<<"False";

  cout<<endl;

  cout<<"Logical Operators"<<endl;

  (x&&y)?cout<<"True":cout<<"False";

  return 0;
}
