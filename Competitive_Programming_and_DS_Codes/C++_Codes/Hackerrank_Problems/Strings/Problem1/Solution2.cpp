#include <cmath>
#include <cstdio>
#include <vector>
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

     string s;
     cin>>s;

     int cnt = 1;
    int i;

    for(i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cnt++;
        }
    }



    cout<<cnt<<endl;
    return 0;
}
