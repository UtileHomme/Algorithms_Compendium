<!-- What are pointers used for -->

- Pointers store the address of variables or a memory location

<!-- How is a pointer defined -->

int *ptr;

<!-- How to access the address of a variable to a pointer -->

- use the unary operator "&"

Eg -

#include <iostream>

  using namespace std;

  int main()
  {
    int x;

    cout <<&x;

    return 0;
  }

  <!-- How to initialize or access the value of a pointer -->

  1. To declare a pointer variable

  - there must be '*' before the name

  2. To access the value of the pointer

  <!-- Visualizing pointers -->

  http://imgur.com/a/VEtLN

  <!-- Kind of operations that can be performed on Pointers -->

  - A limited set of arithmetic operations can be performed on pointers

  - increment (++)
  - decrement (--)
  - an integer can be added to a pointer
  - an integer may be subtracted from a pointer

  <!-- What does a pointer signify -->

  - An array name acts like a pointer constant
  - The value of this pointer constant is the address of the first element

  <!-- How are pointers and Multi-dimensional arrays related -->

  num[i][j] = *(*(num+i)+j);

  http://imgur.com/a/pZzrj

  <!-- Eg- -->
  <!-- Reference - https://www.youtube.com/watch?v=W0aE-w61Cb8&list=WL&t=1s&index=2 -->

  <!-- Pictorial representation of pointer address -->
  https://imgur.com/a/f3ycZ

  <!-- How are pointers really used -->
  1. Anytime a new memory is allocated during program execution, the address is returned in the
  form of a pointer

  2. Refer and share large data structures without making a copy of the structures

  3. Specify relationships among data - linked lists, trees, graphs etc.

  <!-- How does the memory look -->

  - Everytime we compile a program, the compiler is setting up a memory layout. It looks like as below:

  https://imgur.com/a/Qs8nv

  <!-- How to allocate memory -->
  <!-- Reference - https://www.youtube.com/watch?v=CSVRA4_xOkw&list=WL&index=1 -->
  - done using "new" operator

  <!-- Eg- -->
  - int *p =  new int;
  *p = 5;

  - This allocates some amount of memory onto the "Heap"

  <!-- This is how it look -->
  https://imgur.com/a/0YS5d

  <!-- Eg- -->
  - int *p =  new int;
  *p = 5;
  p = new int(10);

  - Now the value of "10" has a new address and this new address is stored in "p"
  - the old value gets replaced

  <!-- This is how it looks -->
  https://imgur.com/a/FOQPR

  - Now "5" is a garbage value
  - this might lead us to run out of the Heap space
  - to avoid this do the following

  <!-- Eg- -->
  - int *p =  new int;
  *p = 5;
  delete p;    //freeing up the space
  p = new int(10);

  <!-- We have a dangling pointer situation here -->
  https://imgur.com/a/8BZUf

  - This happens when a pointer has an address but the address doesn't point to any particular location
  - To avoid this , we can do the following:

  - int *p =  new int;
  *p = 5;
  delete p;    //freeing up the space
  p = NULL;


  <!-- Eg- -->

  void x()
  {
    int *p = new int;
  }

  <!-- How do stack and heap look like from the above eg -->
  https://imgur.com/a/kaGy3

  - If we do not assign any value, the stack part will be removed as  soon as function "x" terminates
  - we'll have created a garbage value

  <!-- Why pointers are required -->
  <!-- Reference - Saurabh School pointer series -->

  - Computer is a contiguous blocks of memory locations
  - we have a 32 bit memory system, therefore, we have 2^32 memory locations
  - Assume each location can store 1 byte of memory
  - We will have 2^32 * 1 bytes of memory we can store

  1 byte = 8 bits

  - whenever a variable is declared, it is allocated memory on the basis of the datatype and the compiler
  - In a typical compiler,
  a. int = 4 bytes
  b. char = 1 byte
  c. float = 4 bytes


  <!-- Memory Layout explained in Detail -->
  <!-- Reference - https://www.geeksforgeeks.org/memory-layout-of-c-program/ -->

  A typical memory representation consists of the following sections

  1. Text Segment
  2. Initialized data segment
  3. Uninitialized data segment
  4. Stack
  5. Heap

  https://imgur.com/a/CMpKA

  1. Text segment
  - also known as the code segment
  - contains executable instructions

  - As a memory region, it may be placed below the heap or stack in order to prevent heaps and stack
  overflows from overwriting it
  - it is sharable so that only a single copy nees to be in memory for frequently executed programs, such as text editors
  , c Compiler, shells
  - it is often read only to prevent a program from accidently modifying its instruction

  2. Initialized data segment
  - a portion of virtual address space of a program which contains the global and static variables that are initialized by the programmer
  - it is not read only since the values of the variables can be altered at run time

  3. Uninitialized data segment
  - often called the "bss"
  - data in this segment is initialized by the kernel to arithmetic "0" before the program starts executing

  - it starts at the end of the data segment and contains all global variables and static variables that are initialized to 0 or do not have explicit initialization
  in the source code

  4. Stack
  - it is traditionally adjoined the heap area and grows in the opposite direction
  - when the stack pointer meets the heap pointer, free memory is exhausted

  - the stack area contains the program stack, a LIFO structure, typically located in the higher parts of the memory
  - A stack pointer tracks the top of the stack
  - it is adjusted each time a value is pushed onto the stack
  - the set of values pushed for one function call is termed as STACK FRAME
  - it contains AT MINIMUM a return address

  - each time a funciton is called, the address of where to return to and certain information about the caller's environment such as
  some of the machine registers is saved on the stack
  - the newly called function then allocates room on the stack for its automatic and temporary variables
  - each time a recursive function calls itself, a new stack frame is used so that one set of variables do not interfere with the variables
  from another instance of the function

  5. Heap
  - the segment where dynamic memory allocation takes place
  - it begins at the end of the BSS segment and grows to larger addresses from there
  - it is shared by all shared libraries and dynamically loaded modules in a process

  <!-- Reference - https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/ -->
  <!-- Reference - https://www.youtube.com/watch?v=bucO3KbSemg&index=12&list=PLTZbNwgO5ebrkVhq8eoVMwrvFBSNHx87o&t=0s -->

  - Applications of Dynamic memory
  1. To allocate memory of variable size which is not possible with compiler allocated memory except variable length arrays
  2. We are free to allocate and deallocate memory whenever we need and whenever we don't need anymore
  Eg - Linked List, Tree etc.

  <!-- How is dynamic memory allocation different from normal variable allocation -->

  - For normal variables like "int a", "char str[10]" etc. , memory is allocated and deallocated automatically
  - For dynamically allocated memory like "int *p new int[10]", it is the programmer's responsibility to deallocate memory when no longer needed
  - If programmer doesn't deallocate the memory, it causes memory leak (memory is not deallocated until program terminates)

  ** C++ uses "new" and "delete" to allocate and deallocate memory

  1. new operator
  - denotes a request for memory allocation on the Heap
  - if sufficient memory is available, new operator intializes the memory and returns the address of the newly allocated and intialized memory to the pointer variable

  <!-- Syntax -->
  - To allocate memory of any data type, use
  pointer-variable = new datatype;

  ** datatype could be any built-in datatype including array or any user defined data types including structure and class

  Eg -

  int *p = NULL;
  p = new int;

  OR

  int *p = new int;

  <!-- Initialize memory -->
  pointer-variable = new datatype(value);

  Eg -
  int *p = new int(25);
  float *q= new float(75.25);

  <!-- Allocate block of memory -->
  pointer-variable = new datatype[size];

  Eg -
  int *p = new int[10];

  - Dynamically allocates memory for 10 integers continuously of type "int" and returns pointer to the first element of the sequence
  which is assigned to p (a pointer).

  https://imgur.com/a/LqHzj

  <!-- What if enough memory is not available during runtime -->

  - If enough memory is not available in the heap, the new request indicates failure by throwing an exception of type "std:bad_alloc" and new operator returns a pointer
  - it is a good idea to check for pointer variable

  Eg -
  int *p = new int;
  if (!p)
  {
    cout << "Memory allocation failed\n";
  }

  2. delete operator
  delete pointer-variable

  - To delete a dynamically allocated array pointed by pointer-variable,use
  delete[] pointer-variable

  <!-- How are pointers and multidimensional arrays related -->
  <!-- Reference - https://www.youtube.com/watch?v=gO1txUhscWY&list=PLTZbNwgO5ebrkVhq8eoVMwrvFBSNHx87o&t=0s&index=8 -->

  <!-- Representation of 2-D array  -->
  https://imgur.com/a/TvTjE

  What a shift by "1" means
  https://imgur.com/a/9e3ff

  - A+1 means move to the next row
  A = A[0][0]

  https://imgur.com/a/3oLtc

  A[i][j] = *((A+i)+j)
  A[i][j] = *(A+i)[j]
  A[i][j] = *(A[i]+j)

  <!-- How are pointers and strings related -->

  - strings are array of characters terminated by '\0'

  <!-- How are pointers and 2-D char arrays related -->
  <!-- Reference - https://www.youtube.com/watch?v=SbjMkilElE4&index=11&list=PLTZbNwgO5ebrkVhq8eoVMwrvFBSNHx87o&t=0s -->
  char names[4][5] = {"JILL","JACK","NAMO","BANG"};

  <!-- Representation in memory -->
  https://imgur.com/a/CBIRb

  If we have a word with less characters , we end up wasting space

  <!-- Using an array of pointers to strings -->

  char *names2[] = {"JILL","JACK","NAMO","BANG"};

  - here the individual words are not contiguous

  - the array of pointers is used for storing the starting index of each word

  <!-- https://imgur.com/a/RTNKf -->

  <!-- Double pointers -->

  <!-- Reference - https://www.youtube.com/watch?v=d3kd5KbGB48&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=4&t=0s -->

  https://imgur.com/a/a5DQaUY

  <!-- Pointers as function arguments (understanding call by reference) -->
  <!-- https://www.youtube.com/playlist?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_ -->

  <!-- (call by value) -->
  https://imgur.com/a/CLCOI3k

  <!-- How call by value looks in the stack frame -->
  https://imgur.com/a/5CN8aDB

  https://imgur.com/a/EVp6rqM

  <!-- call by reference -->
  https://imgur.com/a/VAOhYrp

  <!-- How call by reference looks in the stack frame -->
  https://imgur.com/a/9Jx4wVI

  <!-- Relationship between pointers and arrays -->
  <!-- Reference - https://www.youtube.com/watch?v=ASVB8KAFypk&index=6&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s -->

  https://imgur.com/a/W6c1rAZ

  <!-- Arrays as function  arguments -->
  <!-- Reference - https://www.youtube.com/watch?v=CpjVucvAc3g&index=7&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s -->

  https://imgur.com/a/DWau24d

  <!-- Sample program -->
  https://imgur.com/a/ekBWIhQ

  <!-- Character arrays and pointers -->
  <!-- Reference - https://www.youtube.com/watch?v=Bf8a6IC1dE8&index=8&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s -->

  <!-- Reference - https://www.youtube.com/watch?v=vFZTxvUoZSU&t=0s&index=9&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_ -->

  <!-- Initializing character arrays -->
  https://imgur.com/a/kIaaws4

  https://imgur.com/a/ordhiUF

  https://imgur.com/a/1PiilAh

  https://imgur.com/a/22Ok4A8

  <!-- How character arrays and pointers are related -->

  https://imgur.com/a/sxvKdV8

  ** Arrays are always passed to function by reference

  https://imgur.com/a/wyTDQVn

  <!-- How to define a pointer to 1-D array of 3 integers -->
  <!-- Reference - https://www.youtube.com/watch?v=sHcnvZA2u88&t=0s&index=10&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_ -->

  https://imgur.com/a/9jg95UV

  <!-- How to access 2-D arrays using pointers -->

  https://imgur.com/a/nRYLEol

  <!-- Pointers and Multi-dimensional arrays (how it looks) -->
  <!-- Reference - https://www.youtube.com/watch?v=_j5lhHWkbnQ&t=0s&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&index=11 -->

  <!-- 2 -D -->
  https://imgur.com/a/JoZcIy6

  <!-- 3 - D -->
  https://imgur.com/a/lVAbvHU

  <!-- How to and how not to return pointers as function returns -->
  <!-- Reference - https://www.youtube.com/watch?v=E8Yh4dw6Diw&index=14&list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&t=0s -->

  <!-- Avoid this -->
  https://imgur.com/a/eCVlucW

  <!-- Do this -->
  https://imgur.com/a/mHIR26D

  <!-- What are function pointers -->
  - they are used to store addresses of functions
