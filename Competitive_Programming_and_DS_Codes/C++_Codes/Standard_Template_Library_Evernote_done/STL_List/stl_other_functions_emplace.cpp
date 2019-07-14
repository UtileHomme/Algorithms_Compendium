#include <iostream>
#include <list>

using namespace std;

int main()
{
  list <int> glist;

  list <int>::iterator it = glist.begin();

  for(int i=1;i<-5;i++)
  {
    glist.emplace_back(i);
  }

  cout<<"List after emplace_back operation is"<<endl;
  for(int &x : glist)
  {
    cout<<x<<" ";
  }

  cout<<endl;

  for (int i=10; i<=50; i+=10)
  glist.emplace_front(i);

  // Displaying list elements
  cout << "List after emplace_front operation is : ";
  for (int &x : glist) cout << x << " ";
  cout << endl;

  // using advance() to advance iterator position
  advance(it, 2);

  // inserting element at 2nd position using emplace()
  glist.emplace(it, 100);

  // Displaying list elements
  cout << "List after emplace operation is : ";
  for (int &x : glist) cout << x << " ";
  cout << endl;

  return 0;
}
