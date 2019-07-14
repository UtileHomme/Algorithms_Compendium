// https://www.geeksforgeeks.org/interesting-facts-bitwise-operators-c/

#include <iostream>

using namespace std;

int main()
{

  //Taking an unsigned "int" would require 32 bits
  //this is worthless , so we use unsigned char which requires only 8 bits
  unsigned char a = 5, b=9;

  cout<<a<<" "<<b<<endl;

  cout<<"AND Operator"<<endl;
  cout<<(a&b)<<endl;

  cout<<"OR Operator"<<endl;
  cout<<(a|b)<<endl;

  cout<<"XOR Operator"<<endl;
  cout<<(a^b)<<endl;

  cout<<"NOT Operator"<<endl;
  cout<<~(a)<<endl;

  cout<<"Left shift Operator"<<endl;
  cout<<(b<<1)<<endl;

  cout<<"NOT Operator"<<endl;
  cout<<(b>>1)<<endl;

  return 0;
}
