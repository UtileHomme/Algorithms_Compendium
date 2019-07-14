// https://www.geeksforgeeks.org/list-cpp-stl/

#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void showlist(list <int> g)
{
  list <int>:: iterator it;

  for(it=g.begin(); it!=g.end();it++)
  {
    cout<<"\t"<<*it;
  }
  cout<<endl;
}

int main()
{
  list <int> g1, g2;

  for(int i=0;i<10;i++)
  {
    g1.push_back(i*2);
    g2.push_back(i*3);
  }

  cout << "\nList 1 (g1) is : ";
  showlist(g1);

  cout << "\nList 2 (g2) is : ";
  showlist(g2);

  cout << "\ng1.front() : " << g1.front();
  cout << "\ng1.back() : " << g1.back();

  cout<<endl;
  cout << "\ng1.pop_front() : ";
  g1.pop_front();
  cout<<endl;

  cout<<"Showing list after pop front"<<endl;
  showlist(g1);

  cout<<endl;

  cout << "\ng2.pop_back() : ";
  g2.pop_back();
  cout<<"Showing list after pop back"<<endl;

  showlist(g2);

  cout << "\ng1.reverse() : ";
  g1.reverse();
  showlist(g1);

  cout << "\ng2.sort(): ";
  g2.sort();
  showlist(g2);
}
