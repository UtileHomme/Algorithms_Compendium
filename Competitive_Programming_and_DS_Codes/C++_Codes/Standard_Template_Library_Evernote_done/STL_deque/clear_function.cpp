// https://www.geeksforgeeks.org/dequeclear-dequeerase-c-stl/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
  deque <int> mydeque {1,2,3,4,5};

  mydeque.clear();

  for(auto it=mydeque.begin(); it!=mydeque.end(); ++it)
  {
    cout<<" "<<*it;
  }

  return 0;
}
