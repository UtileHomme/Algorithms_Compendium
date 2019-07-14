// https://www.interviewbit.com/problems/prime-numbers/

// https://www.geeksforgeeks.org/?p=22295

#include <iostream>
#include <vector>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
  vector<int> sieve(int &A)
  {

    bool Prime[A+1];

    vector <int> B;

    for(int i=0;i<sizeof(Prime);i++)
    {
      Prime[i]=true;
    }

    for(int i=2; i*i<=A; i++)
    {
      if(Prime[i]==true)
      {
        for(int j= i*2; j<=A; j = j + i)
        {
          Prime[j] = false;
        }
      }
    }

    for(int i=2;i<=A;i++)
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
