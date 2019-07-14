// https://www.geeksforgeeks.org/set-in-cpp-stl/

#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main()
{
  set <int, greater <int>> g1;

  g1.insert(40);
  g1.insert(30);
  g1.insert(60);
  g1.insert(20);
  g1.insert(50);

  //only one 50 gets added to the set
  g1.insert(50);
  g1.insert(10);

  set <int, greater<int>>:: iterator itr;

  cout<<"The set g1 is"<<endl;
  for(itr = g1.begin(); itr!=g1.end();++itr)
  {
    cout<<*itr<<" ";
  }

  cout<<endl;

  set <int> g2(g1.begin(), g1.end());

  cout<<"The set g2 is"<<endl;
  for(itr = g2.begin(); itr!=g2.end();++itr)
  {
    cout<<*itr<<" ";
  }

  cout<<endl;

  cout<<"Removing all elements less than 30"<<endl;

  g2.erase(g2.begin(), g2.find(30));

  for(itr = g2.begin(); itr!=g2.end();++itr)
  {
    cout<<*itr<<" ";
  }

  cout<<endl;

  cout<<"Remove the element 50 in g2"<<endl;
  int num;

  num = g2.erase(50);
  cout<<num<<"removed"<<endl;

  for(itr = g2.begin(); itr!=g2.end();++itr)
  {
    cout<<*itr<<" ";
  }

  cout<<endl;

  cout << "g1.lower_bound(40) : "
     << *g1.lower_bound(40) << endl;
cout << "g1.upper_bound(40) : "
     << *g1.upper_bound(40) << endl;

//lower bound and upper bound for set g2
cout << "g2.lower_bound(40) : "
     << *g2.lower_bound(40) << endl;
cout << "g2.upper_bound(40) : "
     << *g2.upper_bound(40) << endl;
  return 0;
}
