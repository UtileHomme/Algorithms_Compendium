#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "Jatin loves reading";

    string s2 = "Jatin loves comics";

    s1.swap(s2);

    cout<<s1<<endl;
    cout<<s2<<endl;
}
