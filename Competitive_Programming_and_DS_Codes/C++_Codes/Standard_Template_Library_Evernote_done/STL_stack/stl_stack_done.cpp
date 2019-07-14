#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> myStack;
    stack<char> myCharStack;

    for(int i=0;i<10;i++)
    {
        myStack.push(i);
    }

    cout<<"Popping out elements"<<endl;

    while(!myStack.empty())
    {
        cout<<" "<<myStack.top();
        myStack.pop();
    }


    cout<<endl;

    myCharStack.push('J');
    myCharStack.push('O');
    myCharStack.push('H');
    myCharStack.push('N');

    cout<<"Reversing the string JOHN "<<endl;

    while(!myCharStack.empty())
    {
        cout<<" "<<myCharStack.top();
        myCharStack.pop();
    }

    return 0;

}
