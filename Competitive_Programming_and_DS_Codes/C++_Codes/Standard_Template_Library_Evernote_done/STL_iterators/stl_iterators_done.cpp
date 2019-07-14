// https://www.geeksforgeeks.org/?p=138530

#include <iostream>
#include <iterator>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> ar1{1,2,3,4,5};

  vector <int>::iterator ptr;

  cout<<"The vector elements are ";

  for(ptr = ar1.begin(); ptr<ar1.end(); ptr++)
  {
    cout<<*ptr<<" ";
  }
  return 0;
}
