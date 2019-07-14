// https://www.geeksforgeeks.org/return-void-functions-c/

#include <iostream>

using namespace std;

void work()
{
  cout<<"The void function has returned a void()!!"<<endl;
}

void test()
{
  return work();
}

int main()
{
  test();
  return 0;
}
