// https://www.geeksforgeeks.org/listremove-listremove_if-c-stl/

#include <iostream>
#include <list>

using namespace std;

bool even(const int &val)
{
  return (val%2)==0;
}

int main()
{
  list <int> mylist{1,2,2,2,5,6,7};

  mylist.remove_if(even);

  for(auto it=mylist.begin(); it!=mylist.end();it++)
  {
    cout<<" "<<*it;
  }

  return 0;
}
