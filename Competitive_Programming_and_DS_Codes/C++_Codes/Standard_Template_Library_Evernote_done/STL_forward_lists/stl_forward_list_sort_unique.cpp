// https://www.geeksforgeeks.org/forward-list-c-set-2-manipulating-functions/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  forward_list<int> flist1 = {1, 2, 3, 2, 3, 3, 1};

  // Sorting the forward list using sort()
  flist1.sort();

  // Displaying sorted forward list
  cout << "The contents of forward list after "
  "sorting are : ";
  for (int &x : flist1)
  cout << x << " ";
  cout << endl;

  // Use of unique() to remove repeated occurrences
  flist1.unique();

  // Displaying forward list after using unique()
  cout << "The contents of forward list after "
  "unique operation are : ";
  for (int &x : flist1)
  cout << x << " ";
  cout << endl;

  return 0;
}
