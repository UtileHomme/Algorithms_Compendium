// https://www.interviewbit.com/problems/sorted-permutation-rank-with-repeats/#

#include <iostream>
#include <bits/stdc++.h>

#define MOD 1000003

using namespace std;

class Solution
{
public:

  void initializeFactorials(int totalLen, vector <int> &fact)
  {
    long long int factorial = 1;
              fact.push_back(1); // 0!= 1
              for (int curIndex = 1; curIndex < totalLen; curIndex++) {
                  factorial = (factorial * curIndex) % 1000003;
                  fact.push_back(factorial);
              }
              return;
  }

  /*
  (1/A)%MOD = A^(MOD-2) % MOD
  */

  long long int inverseNumber(int num)
  {
    long long int ans = 1, base = (long long) num;
         int power = 1000003 - 2;
         while (power > 0) {
             if (power == 1) {
                 return (ans * base) % 1000003;
             }
             if (power % 2 == 0) {
                 base = (base * base) % 1000003;
                 power /= 2;
             } else {
                 ans = (ans * base) % 1000003;
                 power--;
             }
         }
         return ans;
  }

  int findRank(string S)
  {
    //maintains the count of each character of S
    int charCount[256];

    memset(charCount, 0, sizeof(charCount));

    for (int i = 0; i < S.length(); i++)
    {
    charCount[S[i]]++;
    }
    
    vector <int> fact;

    initializeFactorials(S.length()+1, fact);

    long long int rank = 1;

    for(int i=0;i<S.length();i++)
    {
      long long int less = 0;
      int remaining = S.length()-i-1;

      //for every character less than the current considered character, do this
      for(int ch = 0; ch<S[i]; ch++)
      {
        if(charCount[ch]==0)
        {
          //skip the iteration
          continue;
        }

        //this is done so that if the repeated element comes, while considering
        // it for the permutations, it is not considered again
        charCount[ch]--;

        long long int numPermutation = fact[remaining];

        //used for finding the characters which are repeated while forming the permutation
        for(int c=0; c<128; c++)
        {
          if(charCount[c]<=1)
          {
            continue;
          }

          numPermutation = (numPermutation * inverseNumber(fact[charCount[c]])) % MOD;
        }

        //Bring the less than characters count to original
        charCount[ch]++;

        less = (less + numPermutation)%MOD;
      }

      rank = (rank + less) % MOD;

      charCount[S[i]]--;
    }

    return rank;
  }
};

int main()
{
  Solution s;

  string k = "settLe";
  int l = s.findRank(k);
  cout<<l;

  return 0;
}
