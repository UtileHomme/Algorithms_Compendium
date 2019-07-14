// Reference - https://www.youtube.com/watch?v=SbjMkilElE4&index=11&list=PLTZbNwgO5ebrkVhq8eoVMwrvFBSNHx87o&t=0s

#include <iostream>

using namespace std;

int main()
{
    char names[5][10]= {
        "Jack",
        "Jill",
        "Mary",
        "Peter",
        "Dan"
    };

    char *names2[]= {
        "Bill",
        "Jim",
        "Ann",
        "Angel",
        "Deepika"
    };

    names2[3] = "Patrick";

    for(int i=0;i<5;i++)
    {
        cout<<names2[i]<<endl;
    }
    return 0;
}
