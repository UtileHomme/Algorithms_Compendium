// https://www.geeksforgeeks.org/listremove-listremove_if-c-stl/

#include <iostream>
#include <list>

using namespace std;

bool prime(const int &val)
{

int i;

for(i=2;i<val;i++)
{
  if(val%i==0)
  {
    return false;
    break;
  }
}

if(val==i)
{
  return true;
}

}


int main()
{
  list <int> mylist{2, 4, 6, 7, 9, 11, 13};

  mylist.remove_if(prime);

  for(auto it=mylist.begin(); it!=mylist.end();it++)
  {
    cout<<" "<<*it;
  }

  return 0;
}
