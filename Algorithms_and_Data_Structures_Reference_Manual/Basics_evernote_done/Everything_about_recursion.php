<!-- done partially -->

<!-- Real Life example of Recursion -->
<!-- Reference - http://cryptroix.com/2016/10/10/understanding-multiple-recursion/ -->

https://imgur.com/a/Tutrx

<!-- What is a recursion -->
- it is a function that calls itself
- Whenever a function calls itself, creating a loop, then that's recursion
- In order to solve a problem, functions can call themselves to solve smaller subproblems

- Everytime when recursion calls its main function it creates a new frame in stack, so if there is
no base condition(stop condition) then it will continue creating new frames each time
- Every new frame in stack needs more and more memory it means there would be less memory for
call stack
- Call stack have limited memory. When this limited memory exceeds its limit, stack becomes full and
that's called as stack overflow

<!-- When to use a recursion -->
- The problem can be broken down into smaller problems of the same type
- Problems have some base case(s)
- Base case is reached before the stack size limit exceeds

<!-- How does an empty stack look like -->

https://imgur.com/a/tVgi5

<!-- Different type of recursions -->

<!-- 1. Head Recursion -->

Eg -

int hello(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        hello(x-1);
        print(x);
    }
}

hello(3);


- A function makes its recursive call and performs some more calculations, maybe using the result of the
recursive call
- In the above code, hello(x-1) is the recursive call happening before the printing of data
- So, nothing will happen until the recursion completes its cycle and finds the base condition

<!-- Output  -->
1
2
3

<!-- 2. Tail Recursion -->

Eg -

int hello(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        print(x);
        hello(x-1);
    }
}

hello(3);

Here, all calculations happen first and the recursive call is the last thing that happens in code

<!-- **Note -->
- Stack quantity depends on how many recursive calls there are in a program
- If there is 1 recursive call then there would be only one stack , if 2 recursive calls then 2 stacks
so on

- When any recursive call calls the main function or any other recursive call, it immediately adds the
original value to the stack of that recursive function
Eg - If there is a recursive call "hello(x-1)" which executes with "x=3", then immediately "x=3" will add to
hello(2)'s stack

- First recursion's returning value can be second recursion's calling value

- Every stack has it's own stack calls and every stack stores its own values, so stack calls depend on how many
values it has saved or stored.
- it will be called until all the values of the stack have been returned one by one by each call

<!-- Multiple Recursion -->

http://cryptroix.com/2016/10/10/understanding-multiple-recursion/  (Redo this link. It's very important)

int hello(int x)
{
    if(x==0)
    {
        return ;
    }
    else
    {
        hello(x-1);
        cout<<"This value has been removed from 1st stack"<<x;
        hello(x-1);
        cout<<"This value has been removed from 2nd stack"<<x;

    }
}

** When the Head recursion finds the base condition, it executes the rest of the code below the recusion condition
** When any recursive call on the main function executes, it immediately adds the original value to the stack of that recursive function

- If recursion call is from first recursion and it finds its base case, then it will execute the rest of the code of first recursion
- If recursion call is from second recursion and it finds its base case, then it will execute the rest of the code of second recursion

<!-- What is stack overflow -->
- Recursive calls will be made continuously and each time a recursive call is made a new stack frame is created
- Every new stack frame created needs more memory which then means that there is less memory on the call stack
- The call stack has limited memory which is usually determined at the start of the program - and when that limited memory is exceeded
then the stack is said to overflow, which results in program crash
- if we do not have the base case, the stack will overflow

<!-- Difference between infinite recursive and infinite loop -->

- A recursive function calls itself, which pushes parameters onto the stack
- This may go on forever, eventually leading to a stack overflow
- Some compilers can optimize this away by turning the recursive function into a while loop (called tail recursion)
- The while loop will simply go back to the top and reuse the same space over again, so it can run literally forever (until the power goes out)

- The recursive code will at some point in time give the stack overflow

** If we have the choice between recursive function and an iterative, one should prefer the iterative as the recursive code can lead to
stack overflow and other issues
- it also consumes more memory (on stack), while a loop doesn't allocate more memory each run

<!-- How the factorial of a number stack looks like -->

<!-- Program -->

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

<!-- Pictorial representation -->
https://imgur.com/a/Ht3x8

<!-- What is backtracking -->
<!-- Reference - https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/tutorial/ -->

- While solving a problem using recursion, we break the given problem into smaller ones
- Let's say we have a problem A and we divided it into three small problems B, C and D
- Now it might be the case that the solution to "A" doesn't depend on all the three sub problems
- In fact, we don't even know on which one it depends

Eg -
Suppose you are standing in front of three tunnels, one of which is having the bag of gold at its end, but we don't know which one
- so, we'll try all three
- First we go to the first tunnel, if that is not the one, then come out of it and go into tunnel 2 and again if that is not the one, come out of it and go into tunnel 3

- Therefore, backtracking means that we attempt solving a subproblem and if we don't reach the desired solution, then undo whatever we did for solving the subproblem
and try solving another subproblem

<!-- N-Queens problem (to be done later) -->
