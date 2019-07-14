// https://www.geeksforgeeks.org/dequefront-dequeback-c-stl/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
  deque <int> mydeque;
  mydeque.push_back(3);
  mydeque.push_back(4);
  mydeque.push_back(1);
  mydeque.push_back(7);
  mydeque.push_back(3);

  cout<<mydeque.front();

  return 0;
}
