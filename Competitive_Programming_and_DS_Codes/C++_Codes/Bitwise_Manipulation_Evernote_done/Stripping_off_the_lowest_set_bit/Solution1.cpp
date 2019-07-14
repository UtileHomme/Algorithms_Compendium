// https://www.geeksforgeeks.org/?p=137604

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void strip_last_set_bit(int &num)
{
  num = num & (num-1);
}

int main()
{
  int num = 7;

  strip_last_set_bit(num);

  cout<<num;

  return 0;
}
