// https://www.geeksforgeeks.org/listfront-and-listback-in-cpp-stl/

#include <iostream>
#include <list>

using namespace std;

int main()
{
  list <int> mylist{1,2,3,4,5};

  cout<<mylist.front();

  return 0;
}
