// https://www.geeksforgeeks.org/cc-preprocessors/

#include <iostream>

using namespace std;

#define AREA(l,b) (l*b)

int main()
{
  int l1= 10,l2=11;
  int area;
area = AREA(l1,l2);

  cout<<area;
  return 0;
}
