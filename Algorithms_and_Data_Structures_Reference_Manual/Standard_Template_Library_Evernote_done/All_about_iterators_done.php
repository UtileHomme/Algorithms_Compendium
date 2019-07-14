<!-- Reference - https://www.geeksforgeeks.org/?p=138530 -->

- are used to point at the memory addresses of STL containers
- are used in sequence of numbers, characters etc.
- reduce the complexity and execution time of program

<!-- Operations of iterators -->

1. begin()
- returns the beginning position of the containers

2. end()
- returns the end position of the container

3. advance()
- increments the iterator position till the specified number mentioned in the arguments

4. next()
- returns the new iterator that the iterator would point to after advancing the positions mentioned in its arguments

5. prev()
- returns the new iterator that the iterator would point to after decrementing the positions mentioned in its arguments

6. inserter()
- inserts the elements at any position in the container
- takes two arguments, the container and iterator to position where the elements have to be inserted
