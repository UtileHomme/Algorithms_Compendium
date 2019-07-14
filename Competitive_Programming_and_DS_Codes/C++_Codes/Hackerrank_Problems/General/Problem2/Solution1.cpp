// https://ideone.com/VIJjHB

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int a,b,c,d,e,f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;

    int sum1=0,sum2=0;

    sum1 = ((a>d && a!=d) ?1:0) + ((b>e && b!=e)?1:0) +((c>f && c!=f)?1:0);
    sum2 = ((a<d && a!=d)?1:0) + ((b<e && b!=e)?1:0) +((c<f && c!=f)?1:0);

    cout<<sum1<<" "<<sum2;

    return 0;
}
