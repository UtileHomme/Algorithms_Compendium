// https://www.geeksforgeeks.org/?p=141095

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void findTriplets(int arr[], int n)
{
  bool found = true;
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (arr[i] + arr[j] + arr[k] == 0)
        {
          cout << arr[i] << " "
               << arr[j] << " "
               << arr[k] << endl;
          found = true;
        }
      }
    }
  }

  // If no triplet with 0 sum found in array
  if (found == false)
  {
    cout << " not exist " << endl;
  }
}

int main()
{
  int a[] = {0, -1, 2, -3, 1};

  int size = sizeof(a) / sizeof(a[0]);

  findTriplets(a, size);

  return 0;
}
