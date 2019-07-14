// https://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions/

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
  forward_list<int> f1 = {10,20,30};

  forward_list<int> f2 = {40,50,60};

  // Shifting elements from first to second
  // forward list after 1st position
  f2.splice_after(f2.begin(), f1);

  // Displaying the forward list
  cout << "The forward list after splice_after operation : ";
  for (int&c : f2)
  cout << c << " ";
  cout << endl;


  return 0;
}
