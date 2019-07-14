// Reference - https://www.youtube.com/watch?v=Bf8a6IC1dE8&index=8&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s

#include <iostream>

using namespace std;

void print(char *c)
{
    int i=0;

    // *(c+i)
    while(c[i]!='\0')
    {
        cout<<c[i];
        i++;
    }

    cout<<endl;
}

int main()
{
    char c[20] = "Hello";
    cout<<c;
}
