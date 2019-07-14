// https://www.interviewbit.com/problems/prime-sum/

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class Solution
{
public:

  bool isPrime(int k)
  {
    for(int i=2;i<=sqrt(k);i++)
    {
      if(k%i==0)
      {
        return false;
      }
    }
    return true;
  }

  vector <int> primesum(int A)
  {
      int x=2;
      int a, b;

      vector <int> B;

      while(x<A-1)
      {
        a = A-x;
        b = x;
        if(isPrime(a) && isPrime(b))
        {
          B.push_back(b);
          B.push_back(a);

          return B;
        }
        x++;
      }
      return B;
  }
};

int main()
{
  vector <int> B;

  int A =12;

  Solution s;

  B = s.primesum(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<endl;
  }
}
