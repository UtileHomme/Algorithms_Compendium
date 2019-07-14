// https://www.geeksforgeeks.org/raw-string-literal-c/
// https://ide.geeksforgeeks.org/1qvE4bf2Dp

#include <iostream>

using namespace std;

int main()
{
    string string1 = "Geeks. \nFor. \nGeeks. \n";

    string string2 = R"(Geeks. \nFor. \nGeeks. \n)";

    cout<<string1<<endl;
    cout<<string2<<endl;
    return 0;
}
