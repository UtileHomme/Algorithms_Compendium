// https://www.geeksforgeeks.org/?p=137604

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int lowest_set_bit(int num)
{
  //-num is equal to 2s complement
  int ret = num & (-num);
  return ret;
}


int main()
{
  int num = 10;
  int ans = lowest_set_bit(num);

  cout<<ans;

  return 0;
}
