// https://www.interviewbit.com/problems/prime-numbers/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution
{
public:
  vector<int> sieve(int &A)
  {

    int Prime[A+1];

    vector <int> B;

    for(int i=0;i<=A;i++)
    {
      Prime[i] = 1;
      Prime[0] = 0;
      Prime[1] = 0;
    }


    for(int i=2;i<=sqrt(A);i++)
    {
      if(Prime[i]==1)
      {
        for(int j=2*i;j<=A;j=j+i)
        {
          Prime[j]=0;
        }
      }
    }

    for(int i=0;i<=A;i++)
    {
      if(Prime[i]==1)
      {
        B.push_back(i);
      }
    }


    return B;
  }

};

int main()
{
  vector <int> B;

  int n = 15;
  Solution s;
  B = s.sieve(n);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<endl;
  }

  return 0;
}

/*
 Time Complexity

 The first loop is called O(n) or O(sqrt(n)) times
 The second loop is called as : (n/2) + (n/3) + (n/5) + (n/7) + ... = n * log (log n)


*/
