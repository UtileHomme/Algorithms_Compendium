// Reference - https://www.youtube.com/watch?v=vFZTxvUoZSU&t=0s&index=9&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_

#include <iostream>

using namespace std;

void print(char *c)
{
    while(*c!='\0')
    {
        cout<<*c;
        c++;
    }

    cout<<endl;
}

int main()
{
    //string gets stored in the space for array
    char *c = "Hello";
    cout<<c;
}
