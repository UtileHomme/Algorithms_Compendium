// https://www.geeksforgeeks.org/?p=1176

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(int n)
{
  int cnt = 0;

  for (int i = 0; i < 32; i++)
  {
    //checks if a bit is set at 'ith' position
    if ((n & (1 << i)) != 0)
    {
      cnt++;
    }
  }

  return cnt;
}

int main()
{
  int i = 23;

  cout << countSetBits(i);
  return 0;
}
