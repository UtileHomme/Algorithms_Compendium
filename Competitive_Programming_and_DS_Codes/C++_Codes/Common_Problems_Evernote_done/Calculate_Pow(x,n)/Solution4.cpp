// https://www.geeksforgeeks.org/write-an-iterative-olog-y-function-for-powx-y/

// Iterative approach in O(log y)

# include <iostream>

using namespace std;

float power(int a, int N)
{
  int res = 1;

  while(N>0)
  {
    // if "N" is odd
    if(N&1)
    {
      res = res * a;
    }

    // N = N/2
    N = N >>1;

    a = a * a;
  }

  return res;

}

int main()
{
    int a = 3;
    int N = 5;

    float b = power(a,N);

    cout<<b<<endl;
    return 0;
}
