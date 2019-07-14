// https://www.geeksforgeeks.org/atol-atoll-and-atof-functions-in-c-c/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  char str1[] = "5672345";

  long int num1 = atol(str1);

  cout << "Number is " << num1 << "\n";

  // char array of numbers of spaces
  char str2[] = "10000002  0";

  // Function calling to convert to a long int
  long int num2 = atol(str2);

  cout << "Number is " << num2 << "\n";
  return 0;
}
