// https://www.geeksforgeeks.org/strpbrk-in-c/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char s1[] = "geeksforgeeks";
  char s2[] = "app";
  char s3[] = "kite";

  char *r, *t;

  r = strpbrk(s1, s2);

  if(r!=0)
  {
    cout<<"First matching character "<<*r<<endl;
  }
  else
  {
    cout<<"Character not found"<<endl;
  }

  t = strpbrk(s1,s3);

  if(t!=0)
  {
    cout<<"First matching character "<<*t<<endl;
  }
  else
  {
    cout<<"Character not found"<<endl;
  }
}
