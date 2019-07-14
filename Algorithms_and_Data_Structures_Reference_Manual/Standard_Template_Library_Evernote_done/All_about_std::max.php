<!-- https://www.geeksforgeeks.org/stdmax-in-cpp/ -->

<!-- What is std::max in stl -->

- it is defined in the header file <algorithm>
- it is used to find out the largest of the numbers passed to it
- it returns the first of them, if there are more than one

- It can be used in the following manner

a. It compares two numbers passed in its arguments and returns the largest of the two, and if both are equal, then it returns the first one

b. It can also compare the two numbers using a binary function, which is pre-defined by the user and then passed as argument in std::max()

c. It is also useful if we want to find the largest element in a given list, and it returns the first one if there are more than one present in the list 
