// https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/


#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

void ReverseArray(char *a, int n)
{
    stack <char> s;

    int i;
    for(i=0; i<n; i++)
    {
        s.push(a[i]);
    }

    for(i=0; i<n; i++)
    {
        a[i] = s.top();
        s.pop();
    }

}
int main() {
    // your code goes here

    char a[] = "Jatin";

    int n = sizeof(a)/sizeof(a[0]);
    
    ReverseArray(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
