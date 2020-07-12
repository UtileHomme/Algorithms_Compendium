<!-- https://www.geeksforgeeks.org/stdmax_element-in-cpp/ -->

<!-- What is std::max_element and how is it different from std::max -->

- For calculating the largest of all elements in a given list, we have "std::max", but what if we want to find the largest element in a sub-section of a list
- for that purpose, we use std::max_element

- it is defined in the header file "algorithm"
- it returns an iterator pointing to the element with the largest value in the range [first, last]

- It can be used in 2 ways

a. by using the operator "<"
b. by using a pre-defined function

** If more than one element satisfies the condition of being the largest,
the iterator returned points to the first of such elements
