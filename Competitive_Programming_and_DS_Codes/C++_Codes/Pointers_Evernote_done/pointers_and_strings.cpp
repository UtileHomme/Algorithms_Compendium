// Reference - https://www.youtube.com/watch?v=21vTqSCt4QE&index=10&list=PLTZbNwgO5ebrkVhq8eoVMwrvFBSNHx87o&t=0s

#include <iostream>

using namespace std;

int main()
{
    char name[]= "saurabh";

    int i=0;

    while(name[i]!='\0')
    {
        cout<<name[i]<<" "<<*(name+i)<<" "<<*(i+name)<<endl;
        i++;
    }

    char *ptr = name;
    cout<<endl;

    while(*ptr!='\0')
    {
        cout<<*ptr;
        ptr++;
    }

    cout<<endl<<name;

    return 0;
}
