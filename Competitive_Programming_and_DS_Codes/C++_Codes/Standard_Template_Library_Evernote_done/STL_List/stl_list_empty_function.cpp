// https://www.geeksforgeeks.org/listempty-listsize-c-stl/

#include <iostream>
#include <list>

using namespace std;

int main()
{
  list <int> mylist{};

  if (mylist.empty()) {
    cout << "True";
  }
  else {
    cout << "False";
  }

  return 0;
}
