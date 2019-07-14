#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 1111

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size,a[MAX],i,sum=0;
    cin>>size;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        sum = sum + a[i];
    }
    cout<<sum;
}
