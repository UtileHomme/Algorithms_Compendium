

<!-- What are Strings and how are they defined in C++ -->
<!-- Reference - https://www.geeksforgeeks.org/stdstring-class-in-c/ -->

- Strings are defined as an array of characters.
- The difference between a string and a character array is that a "string" is terminated by a '\0' special character.

<!-- How to declare a string -->

- it is same as declaring a 1-D array

char string_name[size];

<!-- Different ways of initializing strings -->

1. char str[] = "GeeksforGeeks";

2. char str[50] = "GeeksforGeeks";

3. char str[] = {'G','e','e','k','s','\0'};

4. char str[14] = {'G','e','e','k','s','\0'};

<!-- Initializing character arrays -->
https://imgur.com/a/kIaaws4

https://imgur.com/a/ordhiUF

https://imgur.com/a/1PiilAh

https://imgur.com/a/22Ok4A8

<!-- Memory representation of a string -->

http://imgur.com/a/gtXW0

<!-- How Strings are represented in C++ -->

- C++ can represent strings as a "sequence of characters" in the form of objects of a class
- the class is called std::string
- String class stores the characters as a sequence of bytes with the functionality of allowing access to single byte characters

<!-- String vs Character array in c++ -->

- A character array is an array of characters that can be terminated by a null character
- A string is a class which defines objects that can be represented as stream of characters

- Size of character array has to be allocated "statically" .
- this means that no more memory can be allocated at run time
- also, unused allocated memory is wasted in case of character array
- Memory is allocated "dynamically" in case of strings.
- so, more memory can be allocated at run time.
- as no memory is preallocated, no memory is wasted.

- Implementation of character array is faster than std:string
- Strings are slower when compared to implementation than char array

- Char array does not offer much inbuilt functions to manipulate strings
- String class define number of functionalities which allow many operations on strings

** Size of character array > = number of characters in string + 1

<!-- C++ string class -->

- internally uses char array to store characters but all the memory management, allocation, null termination is handled by string class itself that is why it is easy to use.
- the length of c++ string can be changed at runtime because of dynamic allocation of memory


<!-- Functions present in String class -->

1. getline()
- This function is used to store a stream of characters as entered by the user in the object memory.

<!-- Eg -
#include <string>

int main()
{
string str;

getline(cin,str);

cout<<str;
} -->

2. push_back()
- this function is used to input a character at the end of the string

<!-- Eg -
int main()
{
string str;

getline(cin,str);

str.push_back('c');
cout<<str;
return 0;
} -->

--- use "isalpha" function to check whether a string has an alphabet or a special character
--- use "isdigit" for integers

3. pop_back()
- is used to delete the last character of the string
<!--
Eg -

#include <iostream>
#include <string>
using namespace std;

int main()
{

string s;

getline(cin,s);

cout<<s<<endl;

s.pop_back();

cout<<s;


return 0;
} -->

4. capacity()
- returns the capacity allocated to the string which can be equal to or more than the size of the string
- Additional space is allocated so that when new characters are added to the string, operations can be done efficiently

<!-- Eg -

#include <iostream>
#include <string>
using namespace std;

int main()
{

string s;

getline(cin,s);

cout<<s<<endl;

cout<<s.capacity()<<endl;


return 0;
}

5. resize()
- changes the size of the string

Eg -
#include <iostream>
#include <string>
using namespace std;

int main()
{

string s;

getline(cin,s);

cout<<s<<endl;

s.resize(6);

cout<<s;


return 0;
} -->


6. shrink_to_fit()
- decreases the capacity of the string and makes it equal to the size
- is useful for saving additional memory if we are sure that no further operations will take place
<!--
Eg -
#include <iostream>
#include <string>
using namespace std;

int main()
{

string s;

getline(cin,s);

cout<<s<<endl;

s.shrink_to_fit();

cout<<s;


return 0;
} -->

7. begin()
- returns the iterator to the beginning of the string

8. end()
- returns the iterator to the end of the string

9. rbegin()
- returns a reverse iterator pointing to the end of the string

10. rend()
- returns a reverse iterator pointing to the beginning of the string

<!-- Eg -

#include <iostream>
#include <string>
#include <iterator>

using namespace std;

int main()
{

string s = "jatin";

cout<<s<<endl;

std::string::iterator i;
std::string::reverse_iterator j;

//displaying the string using iterators
for(i=s.begin(); i!=s.end();i++)
{
cout<<*i;
}

cout<<endl;
//displaying the string using reverse iterators
for(j=s.rbegin(); j!=s.rend();j++)
{
cout<<*j;
}

return 0;
} -->

11. copy("char array", len, pos)
- copies the substring from one part into target character array
- takes 3 arguments (the target array, length to be copied and starting position in string to start copying)

<!-- Eg -
#include <iostream>
#include <string>

using namespace std;

int main()
{
string str1 = "jatin loves comics";

char ch[80];

str1.copy(ch, 13,1);

cout<<ch<<endl;
} -->

12. swap()
- swaps on string with another

<!-- Eg -

#include <iostream>
#include <string>

using namespace std;

int main()
{
string s1 = "Jatin loves reading";

string s2 = "Jatin loves comics";

s1.swap(s2);

cout<<s1<<endl;
cout<<s2<<endl;
} -->

<!-- Different ways of creating an array of strings -->
<!-- Reference - https://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/ -->

- Arrays of strings can be created in C++, which can be quite handy

1. Using a 2D array
- this method is useful for shuffling, comparing and accessing randomly

<!-- Disadvantages -->
- Number of strings and size of string (both the values are fixed)
- A 2D array is allocated whose second dimension is equal to maximum sized string which causes wastage of space

2. Using string keyword
- here, the size of the string is not fixed, hence the space is saved

Eg -
String colour[4];

<!-- Disadvantages -->
- Array is of fixed size

3. Using vectors
- STL container vector can be used to dynamically allocate array

<!-- What is tokenizing a string -->
<!-- Reference - https://www.geeksforgeeks.org/tokenizing-a-string-cpp/ -->

- it denotes splitting a string with respect to a delimiter

<!-- What is the "getline" in c++ -->
<!-- Reference - https://www.geeksforgeeks.org/getline-string-c/ -->
<!-- Reference - https://www.geeksforgeeks.org/getline-function-character-array/ -->

- it is used to read a string or a line from input stream.
- it reads a whole line of text that ends with "new line" or until the maximum limit is reached
- it is present in <string> header

  <!-- Syntax 1 -->

  istream& getline(istream &is, string& str, char delim)

  a. is
  - it is an object of istream class and tells the function about the stream from where to read the input from

  b. str
  - it is a string object, the input is stored in this object after being read from the stream

  c. delim
  - it is the delimitation character which tells the function to stop reading further input after reading this character

  <!-- Syntax 2 -->

  istream& getline(istream &is, string& str)

  <!-- (buffer, stream_size, delimiter) -->
  istream& getline(char*, int size, char='\n')

  <!-- The delimiter character is considered as '\n' -->
  istream& getline(char*, int size)

  - it doesn't accept any delimitation character
  - it considers "\n" (new line) character as the delimitation character

  ** it extracts the characters from the input stream and appends it to the string object until the delimiting character is encountered
  - the previous stored value in the string object "str" will be replaced by the input string if any

  <!-- Eg -

  // C++ program to show the getline() with
  // character array
  #include <iostream>
  using namespace std;

  int main()
  {
  char str[20];
  cout << "Enter Your Name::";

  // see the use of getline() with array
  // str also replace the above statement
  // by cin >> str and see the difference
  // in output
  cin.getline(str, 20);

  cout << "\nYour Name is:: " << str;
  return 0;
} -->

<!-- What is a stringstream -->
<!-- Reference - https://www.geeksforgeeks.org/stringstream-c-applications/ -->

- it associates a string object with a stream allowing you to read from the string as if it were a stream (like cin)

1. clear()
- to clear the stream

2. str()
- to get and set the string object whose content is present in the stream

3. operator "<<"
- to add a string to the stringstream object

4. operator ">>"
- to read something from the stringstream object

<!-- How to use the "strchr()" function -->
<!-- Reference - https://www.geeksforgeeks.org/strchr-function-in-cpp/ -->

- it is used for string handling
- "cstring" is the header file

- the function returns a pointer to the last occurrence of a character in a string

- the character whose last occurrence we want to find in passed as the second argument to the function and the string in which we have to find the character is passed as the first argument to the function

<!-- Syntax -->
char *strrchr(const char *str, int c)

- "str" is the string and "c" is the character to be located
- it is passed as its int promotion, but it is internally converted back to char

<!-- How to use isspace() to count the whitespace characters -->
<!-- Reference - https://www.geeksforgeeks.org/isspace-in-c-and-its-application-to-count-whitespace-characters/ -->

- it is a predefined function used for string and character handling.
- cstring is the header file required for string functions and cctype is the header file required for character functions

Different types of whitespace characters

' ' - space
'\t - Horizontal tab
'\n' - Newline
'\v' - Vertical tab
'\f' - Feed
'\r' - carriage return

<!-- Syntax -->
- int isspace(int x)
x : x is character to be checked

<!-- Difference between char* vs std:string vs char[] -->

<!-- Reference - https://www.geeksforgeeks.org/char-vs-stdstring-vs-char-c/ -->

<!-- 1. char* -->

- it is a pointer to the string literal

<!-- Syntax -->

char *str = "This is GeeksForGeeks";

<!-- Pros -->

1. Only one pointer is required to refer to the whole string
  - that shows this is memory efficient

2. No need to declare the size of the string beforehand

<!-- 2. std::string -->

- here "str" is the object of std::string class which is an instantiation of the basic_string class template that uses char (i.e. bytes) as its character type

<!-- Syntax: -->

std::string str = "This is GeeksForGeeks";

3. char[]

<!-- Syntax -->

char str[empty/size] = "This is GeeksForGeeks";

- here, "str" is an array of characters denoting the string

<!-- Pros -->

- we can modify the string at a later stage in the program

<!-- Cons -->

1. This is a statically allocated sized array which consumes space in the stack

2. We need to take a large size of the array if we wish to concatenate or manipulate with other strings since the size of string is fixed.

Eg-
<!--
// CPP program to illustrate char
// concatenation using standard functions
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // take large size of array
    char str[10] = "Hello";

    cout << "Before Concatenation : " << str << endl; // Hello
    strcat(str, " World");
    cout << "After Concatenation : " << str; // Hello World

    return 0;
} -->

Output:

<!-- Before Concatenation : Hello
After Concatenation : Hello World -->

<!-- How to use string::at function to extract characters -->

<!-- Reference - https://www.geeksforgeeks.org/stdstringat-in-c/ -->

- used to extract characters by characters from a given string

<!-- Syntax -->

char &string::at(size_type index)

const char &string::at(size_type index) const

** Both forms return the character that has the index "index" (the first character has index 0)

- For all strings, an index greater than or equal to length() as value is invalid

Return value
- returns the character at a specified position in the string

<!-- Difference between strcat() and strncat() -->

<!-- Reference - https://www.geeksforgeeks.org/strcat-vs-strncat-c/ -->

1. strcat()
- The strcat() function will append a copy of the source string to the end of the destination string

- The strcat() takes two arguments

1. dest
2. src

- it will append a copy of the source string in the destination string
- the terminating character at the end of dest is replaced by the first character of src

2. strncat()
- The strncat() function appends the given number of characters from one string to the end of another string

- It takes three arguments

1. dest
2. src
3. count

- This will append the given number of characters from src string to the end of dest string.

- The terminating character at the end of dest string will be replaced by the first character of src string .

<!-- How strncat() is different from strcat() -->

- strncat() is considered safe as compared to strcat() because strcat() does not check for the size of the copied data, and copies until it gets to a null terminator, it might cause a buffer overflow while strncat() check for the size of the copied data, and will copy only ‘n’ bytes.

<!-- What is strpbrk() function -->

<!-- Reference - https://www.geeksforgeeks.org/strpbrk-in-c/ -->

- It finds the first character in the string "s1" that matches any character specified in "s2" (it excludes terminating null-characters)

<!-- Syntax -->

char *strpbrk(const char *s1, const char *s2)

<!-- Parameters -->
s1 : string to be scanned.
s2 : string containing the characters to match.


<!-- Return Value -->
It returns a pointer to the character in s1 that
matches one of the characters in s2, else returns NULL.

<!-- What is strcoll() function -->

<!-- Reference - https://www.geeksforgeeks.org/strcoll-in-cc/ -->

- it is present in "string.h" header file

- compares the string pointed to by str1 with the one pointed by str2

<!-- Syntax: -->

int strcoll(const char *str1, const char *str2)
function srtcoll() takes two strings as parameters
and returns an integer value.

Value                   Meaning
less than zero          str1 is less than str2
zero                    str1 is equal to str2
greater than zero       str1 is greater than str2

<!-- What is the substring function -->

<!-- Reference - https://www.geeksforgeeks.org/substring-in-cpp/ -->

- "string.h" is the header file

- This function takes two values pos and len as an argument and returns a newly constructed string object with its value initialized to a copy of a sub-string of this object

- Copying of string start from pos and done till pos+len means [pos, pos+len)

<!-- Important Points -->

1. The index of the first character is 0 (not 1)

2. If pos is equal to the string length, the function returns an empty string.

3. If pos is greater than the string length, it throws out_of_range. If this happen, there are no changes in the string.

4. If for the requested sub-string len is greater than size of string, then returned sub-string is [pos, size()).

<!-- Syntax: -->

string substr (size_t pos, size_t len) const;

<!-- Parameters: -->

pos: Position of the first character to be copied.
len: Length of the sub-string.
size_t: It is an unsigned integral type.

<!-- Return value:  -->

It returns a string object.
