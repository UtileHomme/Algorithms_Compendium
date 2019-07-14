// https://www.interviewbit.com/courses/1/topics/2/problems/repeat-and-missing-number-array/previous_submissions/

// https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  vector <int> repeatedAndMissingNumber(const vector <int> &A)
  {
    vector <int> B;
   long long size = A.size();

   long long sum = 0;

   long long sumOfSquares = 0;

   long long temp;

   for(int i=0;i<size;i++)
   {
       temp = A[i];

       sum = sum + temp;

       sum = sum - (i+1);

       sumOfSquares += (temp*temp);

       sumOfSquares -= ((long long)(i + 1) * (long long)(i + 1));
   }

   long long diffOfAandB = sum;
   long long diffOfSquaresOfAandB = sumOfSquares;

   long sumofAandB = diffOfSquaresOfAandB / diffOfAandB;

   int repeatedElement = (sumofAandB+diffOfAandB)/2;
   int missingElement = sumofAandB - repeatedElement;

   B.push_back(repeatedElement);
   B.push_back(missingElement);
   return B;
  }

};

int main()
{

  vector <int> A = {1, 2, 5, 2, 4, 3};

  Solution s;

  vector <int> B = s.repeatedAndMissingNumber(A);

  for(int i=0;i<B.size();i++)
  {
    cout<<B[i]<<" ";
  }

  return 0;
}
