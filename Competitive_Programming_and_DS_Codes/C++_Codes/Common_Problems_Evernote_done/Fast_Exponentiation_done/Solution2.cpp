// https://www.youtube.com/watch?v=-3Lt-EwR_Hw


// Refer CCI V.2 (Page 36)

#include <iostream>

using namespace std;

int exp(int a, int b)
{
  if(b==0)
  {
    return 1;
  }
  else if(b==1)
  {
    return a;
  }
  else
  {
    return a * exp(a, b-1);
  }
}
int main()
{
  int a = 3;
  int b = 4;

  int result = exp(a,b);

  cout<<result;
  return 0;
}
