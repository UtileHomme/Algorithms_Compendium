// https://www.geeksforgeeks.org/?p=137604

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int num = 4;

  int twos_complement = (~num+1);

  cout<<twos_complement;

  return 0;
}
