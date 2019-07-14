// https://www.geeksforgeeks.org/atol-atoll-and-atof-functions-in-c-c/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  // char array
  char pi[] = "3.1415926535";

  // Calling function to convert to a double
  double pi_val = atof(pi);

  // prints the double value
  cout << "Value of pi = " << pi_val << "\n";

  // char array
  char acc_g[] = "9.8";

  // Calling function to convert to a double
  double acc_g_val = atof(acc_g);

  // prints the double value
  cout << "Value of acceleration due to gravity = "
  << acc_g_val << "\n";
  return 0;
}
