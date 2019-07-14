// https://www.geeksforgeeks.org/?p=137604

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool at_position(int &num, int pos)
{
  bool bit = num & (1<<pos);
  return bit;
}

int main()
{
  int num = 7;
  int pos = 1;

  bool bit = at_position(num, pos);

  cout<<bit<<endl;

  return 0;
}
