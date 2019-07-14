// https://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <string> colour;

    colour.push_back("Blue");
    colour.push_back("Red");
    colour.push_back("Orange");
    colour.push_back("Yellow");

    for(int i=0;i<colour.size();i++)
    {
        cout<<colour[i]<<endl;
    }
}
