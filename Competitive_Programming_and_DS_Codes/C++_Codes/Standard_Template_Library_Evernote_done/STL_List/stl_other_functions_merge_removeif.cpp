#include <iostream>
#include <list>

using namespace std;

int main()
{
  list <int> g1 = {1,2,3};

  list <int> g2 = {2,4,6};

  //using merge to merge list1 and list 2
  g1.merge(g2);

  // Displaying list elements
cout << "list1 after merge operation is : ";
for (int &x : g1) cout << x << " ";
cout << endl;

// using remove_if() to remove odd elements
// removes 1 and 3
g1.remove_if([](int x){return x%2!=0;});

// Displaying list elements
cout << "list1 after remove_if operation is : ";
for (int &x : g1) cout << x << " ";
cout << endl;

  return 0;
}
