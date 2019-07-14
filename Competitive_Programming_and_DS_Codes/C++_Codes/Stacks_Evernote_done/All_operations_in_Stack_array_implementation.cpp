//http://www.geeksforgeeks.org/stack-data-structure-introduction-program

#include <iostream>

using namespace std;

#define MAX 1000

class Stack
{
    //functions and variables with "private" visibility
    int top;

    //functions and variables with "public" visibility
  public:
    int a[MAX];

    //constructor for instantiation and assignment of values to some variables when the object is created
    Stack()
    {
        top = -1;
    }

    bool push(int x);
    int pop();
    bool isEmpty();
    void printStack();
};

void Stack::printStack()
{
    for (int i = top; i >= 0; i--)
    {
        cout << a[i] << endl;
    }
}

bool Stack::push(int x)
{

    //if the value of "top" is more than the allowed index value for array
    if (top >= MAX - 1)
    {
        cout << "Stack overflow";
        return false;
    }

    //else
    else
    {
        //increment the top by 1 and add the value here
        a[++top] = x;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack underflow";
        return 0;
    }
    else
    {
        //extract the element at the top and after that decrement it by 1
        int x = a[top--];
        return x;
    }
}

bool Stack::isEmpty()
{
    //if "top"<0, this will return true else return false
    return (top < 0);
}

int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Elements in stack" << endl;
    s.printStack();

    cout << s.pop() << " Popped from the stack" << endl;

    cout << "Elements in stack" << endl;
    s.printStack();

    return 0;
}
