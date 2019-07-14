// https://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char colour[4][10] = {"Blue", "Red", "Orange", "Yellow"};

    for(int i=0;i<4;i++)
    {
        cout<<colour[i]<<"\n";
    }

    return 0;
}
