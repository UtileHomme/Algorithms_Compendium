// https://www.geeksforgeeks.org/?p=137604

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void togglebit(int &num, int pos)
{
  num = num ^ (1<<pos);
}

int main()
{
  int num = 4;
  int pos = 1;

  togglebit(num, pos);

  cout<<num<<endl;
}
