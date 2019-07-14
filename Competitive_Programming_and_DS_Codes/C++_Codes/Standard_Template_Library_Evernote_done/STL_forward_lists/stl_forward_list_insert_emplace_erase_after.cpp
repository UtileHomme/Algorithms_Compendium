// https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  forward_list<int> f = {10,20,30};

  forward_list<int>:: iterator ptr;

  // Inserting value using insert_after()
  // starts insertion from second position
  ptr = f.insert_after(f.begin(), {1,2,3});

  // Displaying the forward list
  cout << "The forward list after insert_after operation : ";
  for (int&c : f)
  cout << c << " ";
  cout << endl;

  ptr = f.emplace_after(ptr,2);

  // Displaying the forward list
  cout << "The forward list after emplace_after operation : ";
  for (int&c : f)
  cout << c << " ";
  cout << endl;

  // Deleting value using erase.after Deleted 2
  // after ptr
  ptr = f.erase_after(ptr);

  // Displaying the forward list
  cout << "The forward list after erase_after operation : ";
  for (int&c : f)
  cout << c << " ";
  cout << endl;

  return 0;
}
