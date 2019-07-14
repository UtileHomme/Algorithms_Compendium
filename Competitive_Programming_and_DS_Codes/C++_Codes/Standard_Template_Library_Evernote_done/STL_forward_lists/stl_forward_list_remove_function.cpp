// https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  forward_list<int> f = {10,20,30,25,40,40};

  // Removing element using remove()
  // Removes all occurrences of 40
  f.remove(40);

  // Displaying the forward list
  cout << "The forward list after remove operation : ";
  for (int&c : f)
  cout << c << " ";
  cout << endl;

  // Removing according to condition. Removes
  // elements greater than 20. Removes 25 and 30
  f.remove_if([] (int x) {return x>20;});

  // Displaying the forward list
  cout << "The forward list after remove_if operation : ";
  for (int&c : f)
  cout << c << " ";
  cout << endl;

  return 0;
}


/*

[] is used to remove multiple values (if present)

*/
