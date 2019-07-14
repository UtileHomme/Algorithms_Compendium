// Refer to CCI Eg 16 (page 35)


#include <iostream>

using namespace std;

int pow(int n)
{
  if(n==0)
  {
    return 0;
  }
  else if(n==1)
  {
    cout<<1<<endl;
    return 1;
  }
  else
  {
    int prev = pow(n/2);
    int curr = prev * 2;
    cout<<curr<<endl;
    return curr;
  }

}

int main()
{
  int n = 24;

  pow(n);

  return 0;
}

// Time Complexity = O(log n)
