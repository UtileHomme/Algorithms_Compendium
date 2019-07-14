<!-- How is I/O performed  -->
<!-- Reference - https://www.geeksforgeeks.org/basic-input-output-c/ -->

- in the form of sequence of bytes known as streams

1. Input Stream
    - If the direction of flow of bytes is from the device (eg - keyboard) to the main memory , the process is called input.

2. Output Stream
    - if the direciton of flow of bytes is from main memory to device, the process is called output

<!-- What are the header files available -->

a. iostream
    - stands for standard input output stream
    - contains definition to objects like "cin", "cout", "cerr"

b. iomanip
    - stands for input output manipulators
    - contains definition of setw, setprecision etc.

c. fstream
    - handles data being read from a file as input or data being written into file as output

<!-- Usage of "cout" -->

#include <iostream>

using namespace std;

int main( ) {
   char sample[] = "GeeksforGeeks";

   cout << sample << " - A computer science portal for geeks";

   return 0;
}

<!-- Usage of "cin" -->

#include<iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: "<<age;

    return 0;
}

<!-- What is the usage of "cerr" -->

- it is used to output errors
- it is unbuffered so it can be used to display the error immediately
- doesn't need to have any buffer to store the error message and display it later

Eg -

#include <iostream>

using namespace std;

int main( )
{
   cerr << "An error occured";

   return 0;
}

<!-- What is a buffer in C++ -->

- it is a temporary storage area
- All standard input and output devices contain input and output buffer

** Streams are buffered
Eg - When we press a key on the keyboard, it isn't sent to the program rather it is buffered by the OS till the time is allotted to the program

<!-- How can buffer affect Programming in C++ -->

- We need to clear the unwanted buffer so as to get the next input in the desired container and not in the buffer of the previous variable

Eg - Let's say,
- After encountering a "cin" statement, we require to input a char array or string
- We need to clear the input buffer or else the desired input is occupied by buffer of previous variable not by the desired container

- On pressing "Enter" on output screen after the first input, as the buffer of previous variable was the space for new container, the program skips the following input of container

<!-- Problem example -->


// C++ Code to explain why not clearing the
// input buffer causes undesired outputs
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    char ch[80];

    // Enter input from user - 4 for example
    cin >> a;

    // Get input from user - "GeeksforGeeks" for example
    cin.getline(ch,80);

    // Prints 4
    cout << a << endl;

    // Printing string : This does not print string
    cout << ch << endl;

    return 0;
}

Input :
4
Gfg

Output:
4

** The "\n" remains in the buffer and is interpreted as next input

<!-- How to resolve the above problem -->

Method 1.

- use "cin.ignore(numeric_limits::max(),"\n");"

- Typing this after the "cin" statement discards everything in the input stream including the newline

Eg -

// C++ Code to explain how "cin.ignore(numeric_limits
// <streamsize>::max(),'\n');" discards the input buffer
#include<iostream>
#include<ios>     // for <streamsize>
#include<limits>  // for numeric_limits
using namespace std;
int main()
{
    int a;
    char str[80];

    // Enter input from user - 4 for example
    cin >> a;

    // discards the input buffer
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    // Get input from user - GeeksforGeeks for example
    cin.getline(str, 80);

    // Prints 4
    cout << a << endl;

    // Printing string : This will print string now
    cout << str << endl;

    return 0;
}

Method 2:

- use "cin>>ws"

- Typing this after the "cin" statement tells the compiler to ignore buffer and also to discard all the whitespaces before the actual content of string or character array

// C++ Code to explain how "cin >> ws" discards
// the input buffer along with initial white spaces
// of string
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a;
    string s;

    // Enter input from user - 4 for example
    cin >> a;

    // Discards the input buffer and intial white spaces of string
    cin >> ws;

    // Get input from user - GeeksforGeeks for example
    getline(cin, s);

    // Prints 4 and GeeksforGeeks : will execute print a and s
    cout << a << endl;
    cout << s << endl;

    return 0;
}

<!-- Difference between "cout<<endl" and "cout<<"\n" " -->

cout<<endl
- inserts a new line and flushes the stream

cout<<"\n"
- only inserts a line
