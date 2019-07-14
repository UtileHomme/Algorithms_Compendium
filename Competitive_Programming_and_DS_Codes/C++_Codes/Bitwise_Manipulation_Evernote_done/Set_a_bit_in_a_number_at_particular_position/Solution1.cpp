// https://www.geeksforgeeks.org/?p=137604

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void setbit(int &num, int pos)
{
  num = num | (1<<pos);
}

int main()
{
  int num=4, pos = 1;

  setbit(num, pos);

  cout<<int(num)<<endl;

  return 0;
}
