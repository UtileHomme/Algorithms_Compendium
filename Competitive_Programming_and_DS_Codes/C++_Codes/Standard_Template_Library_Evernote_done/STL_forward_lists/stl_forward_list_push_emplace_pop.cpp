// https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  forward_list<int> f1 = {10,20,30,40,50};


  // Inserting value using push_front()
  // Inserts 60 at front
  f1.push_front(60);


  // Displaying the forward list
  cout << "The forward list after push_front operation : ";
  for (int&c : f1)
  cout << c << " ";
  cout << endl;

  // Inserting value using emplace_front()
  // Inserts 70 at front
  f1.emplace_front(70);

  // Displaying the forward list
  cout << "The forward list after emplace_front operation : ";
  for (int&c : f1)
  cout << c << " ";
  cout << endl;

  // Deleting first value using pop_front()
  // Pops 70
  f1.pop_front();

  // Displaying the forward list
  cout << "The forward list after pop_front operation : ";
  for (int&c : f1)
  cout << c << " ";
  cout << endl;

  return 0;
}
