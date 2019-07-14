// https://www.geeksforgeeks.org/listfront-and-listback-in-cpp-stl/

#include <iostream>
#include <list>

using namespace std;

int main()
{
  list <int> mylist;

  mylist.push_front(8);
  mylist.push_front(7);
  mylist.push_front(6);
  mylist.push_front(5);
  mylist.push_front(4);
  mylist.push_front(3);
  mylist.push_front(2);
  mylist.push_front(1);

  if(mylist.front()>mylist.back())
  {
    cout<<mylist.front() - mylist.back();
  }
  else if(mylist.front() - mylist.back())
  {
    cout << mylist.back() - mylist.front();
  }
  else
  {
    cout<<"0";
  }

  return 0;
}
