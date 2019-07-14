// https://www.youtube.com/watch?v=JTttg85xsbo&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=3&t=0s

#include <iostream>

using namespace std;

int main()
{
    int a = 1025;

    int *p;

    p=&a;

    cout<<"size of integer is "<<sizeof(int);

    cout<<endl;
    cout<<"Address is "<<p<<" Value is "<<*p<<endl;

    char *p0;

    //typecasting
    p0 = (char *)p;

    cout<<"Size of char is "<<sizeof(char)<<endl;

    //same address as above , but value is 1
    cout<<"Address is"<<p0<<" Value is"<<*p0<<endl;

    return 0;
}

/*
Explanation of above

1025 (in binary looks like)

00000000 00000000 0000100 00000001

- In case of character pointer, the address of first bytes (00000001) is stored in "p0"
- when we derefence it ,i.e., (*p0), the machine says that it is a pointer to a character, so it looks at only one byte to calculate the value



*/
