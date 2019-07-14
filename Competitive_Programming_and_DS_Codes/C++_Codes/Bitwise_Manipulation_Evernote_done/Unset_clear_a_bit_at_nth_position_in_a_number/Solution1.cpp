// https://www.geeksforgeeks.org/?p=137604

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void unset(int &num, int pos)
{
  num = num & (~ (1<<pos));
}

int main()
{
  int num = 7;
  int pos = 2;

  unset(num, pos);

  cout<<num;

  return 0;
}
