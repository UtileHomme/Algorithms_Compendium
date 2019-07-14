// https://www.geeksforgeeks.org/?p=1176

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countSetBits(int A)
{
  int cnt = 0;

  while(A>0)
  {
    cnt += A&1;

    //shift "A" by 1 to the right
    A = A>>1;
  }

  return cnt;
}

int main()
{
  int i = 23;

  cout << countSetBits(i);
  return 0;
}
