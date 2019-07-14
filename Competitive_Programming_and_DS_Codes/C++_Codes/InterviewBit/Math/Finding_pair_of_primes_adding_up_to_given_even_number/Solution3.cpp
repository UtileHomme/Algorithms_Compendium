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
    int upper = sqrt(k);

    if(k==1)
    {
      return 0;
    }

    for(int i=2;i<=upper;i++)
    {
      if(i<=k && k%i==0)
      {
        return 0;
      }
    }

    return 1;
  }

  vector <int> primesum(int A)
  {
    int upperlimit = A/2;

    vector <int> B;
    for(int i=1;i<=upperlimit;i++)
    {
      if(isPrime(i) && isPrime(A-i))
      {
        int myInt[2] = {i, A-i};
        B.assign(myInt, myInt+2);
        return B;
      }
    }

    return B;
  }

};

int main()
{
  vector <int> B;

  int A =16;

  Solution s;

  B = s.primesum(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<endl;
  }
}
