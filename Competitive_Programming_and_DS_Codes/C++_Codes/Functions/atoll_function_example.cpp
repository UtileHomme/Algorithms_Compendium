// https://www.geeksforgeeks.org/atol-atoll-and-atof-functions-in-c-c/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  char big_num1[] = "8239206483232728";

     // Function calling to convert to a long int
     long long int num1 = atoll(big_num1);

     cout << "Number is " << num1 << "\n";

     // char array of numbers of spaces
     char big_num2[] = "100000 9 1324100";

     // Function calling to convert to a long int
     long long int num2 = atoll(big_num2);

     cout << "Number is " << num2 << "\n";
     return 0;
}
