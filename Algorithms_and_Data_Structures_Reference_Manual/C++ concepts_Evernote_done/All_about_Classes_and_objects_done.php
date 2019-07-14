<!-- How to define a class and create an object -->

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
};

<!-- How to define the functions declared above -->

//use the class along with the function
int Stack::pop()
{
    if(top < 0)
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

<!-- How to declare an object -->
    Stack s;

<!-- How to access the functions and variables declared in the class -->

s.push(10);
s.pop()
