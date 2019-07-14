<!-- How a basic c++ program looks -->
<!-- Reference- https://www.geeksforgeeks.org/writing-first-c-program-hello-world-example/ -->

#include <iostream>
  using namespace std;

  <!-- What are preprocessor in C++ -->
  <!-- Reference - https://www.geeksforgeeks.org/cc-preprocessors/ -->

  - programs that process our source code before compilation.

  //How the process looks
  http://imgur.com/a/RYJyR

  There are of the following types:

  1. Macros
  - piece of code which is given some name
  - whenever this name is encountered anywhere in the program, this name is replace with the actual code

  * There is no semi colon at the end of a Macro

  Eg.

  #include<iostream>

    //macro definition
    #define LIMIT 5
    int main()
    {
      for(int i=0; i < LIMIT; i++)
      {
        cout<< i <<"\n";
      }

      return 0;
    }

    2. File Inclusion
    - tells the compiler to include a type of file in the code

    a. #include <file_name>
      - Header files
      - these contain pre-defined functions like cout etc.

      b. #include "file_name"
      - user defined files

      <!-- How to store numbers as big as (10)^10 -->

      Use "long long" int for definition

      <!-- How to divide to integers to give a float output -->

      float(pcnt)/float(n)
