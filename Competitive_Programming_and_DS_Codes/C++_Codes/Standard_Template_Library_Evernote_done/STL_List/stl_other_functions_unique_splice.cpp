#include <iostream>
#include <list>

using namespace std;

int main()
{
  list <int> g1 = {1, 1, 1, 2, 2, 3, 3, 4};

  list <int> g2 = {2,4,6};

  list <int>::iterator it = g1.begin();

  advance(it,3);

  cout<<"List 1 before unique operation is:";
  for(int &x : g1)
  {
    cout<<x<<" ";
  }

  cout<<endl;

  //using unique() to remove repeating elements
  g1.unique();

  // Displaying list elements
  cout << "list1 after unique operation is : ";
  for (int &x : g1)
  {
    cout << x << " ";
  }

  cout << endl << endl;

  //using splice() to splice list2 in list1 at position it
  //inserts list 2 after 2nd position
  g1.splice(it, g2);

  // Displaying list elements
  cout << "list1 after splice operation is : ";
  for (int &x : g1) cout << x << " ";
  cout << endl;

  return 0;
}
