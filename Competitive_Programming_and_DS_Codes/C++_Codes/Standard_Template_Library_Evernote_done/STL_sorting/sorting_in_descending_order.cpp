// https://www.geeksforgeeks.org/sort-c-stl/


/*

- sort() takes a third parameter that is used to specify the order in which elements are to be sorted
- we can pass "greater()" function to sort in descending order.
- This function does comparison in a way that puts greater element before
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
  int n = sizeof(arr)/sizeof(arr[0]);

  sort(arr, arr+n, greater<int>());

  cout << "Array after sorting : \n";
  for (int i = 0; i < n; ++i)
  cout << arr[i] << " ";
  
  return 0;
}
