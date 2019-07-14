// http://www.geeksforgeeks.org/c-program-swap-two-numbers/

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}

int main() {

int a,b;
//enter the two numbers
cin>>a;
cin>>b;
cout<<a<<" "<<b;
swap(&a,&b);
cout<<endl;
cout<<a<<" "<<b;
return 0;
}
