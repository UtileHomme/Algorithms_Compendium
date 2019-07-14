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

    long long int size = A.size();

    long long int sumFrom1toN = ((size)*(size+1))/2;

    long long int sumOfSquaresFrom1ToN = ((size)*(size+1)*(2*size+1))/6;

    long long int actualElementSum = 0;

    long long int actualElementSquareSum = 0;

    for(long long int i = 0; i<size; i++)
    {
      actualElementSum = (long long)A[i] + actualElementSum;

      actualElementSquareSum += ((long long)A[i] * (long long)A[i]);
    }

    long long int diffOfNumbers = sumFrom1toN - actualElementSum;

    long long int diffOfSquareOfNumbers = sumOfSquaresFrom1ToN - actualElementSquareSum;

    long long int sumOfNumbers = diffOfSquareOfNumbers / diffOfNumbers;

    int missingElement = (sumOfNumbers + diffOfNumbers)/2;

    int repeatedElement = missingElement - diffOfNumbers;

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
