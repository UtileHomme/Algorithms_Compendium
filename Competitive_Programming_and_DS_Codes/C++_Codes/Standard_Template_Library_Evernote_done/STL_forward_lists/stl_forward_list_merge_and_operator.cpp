// https://www.geeksforgeeks.org/forward-list-c-set-2-manipulating-functions/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  forward_list<int> flist1 = {1,2,3};

  forward_list<int> flist2;

  flist2 = flist1;

  // Displaying flist2
  cout << "The contents of 2nd forward list"
  " after copy are : ";
  for (int &x : flist2)
  cout << x << " ";
  cout << endl;

  // Using merge() to merge both list in 1
  flist1.merge(flist2);

  // Displaying merged forward list
  // Prints sorted list
  cout << "The contents of forward list "
  "after merge are : ";
  for (int &x : flist1)
  cout << x << " ";
  cout << endl;

  return 0;
}
