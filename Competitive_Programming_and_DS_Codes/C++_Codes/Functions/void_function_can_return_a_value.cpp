// https://www.geeksforgeeks.org/return-void-functions-c/

#include <iostream>

using namespace std;

void test()
{
  cout<<"hello"<<endl;

  return (void)"Doesn't print";
}

int main()
{
  test();
  return 0;
}
