<!-- What is a stack -->
<!-- Reference - https://www.geeksforgeeks.org/stack-data-structure-introduction-program/ -->

- is a linear data structure which follows a particular order in which the operations are performed.
- the Order is LIFO(Last in First Out)

Basic Operations:
al
1. Push
    - adds an item in the stack.
    - if the stack is full, then "Overflow" occurs

2. Pop
    - Removes an item from the stack.
    - The items are popped in reversed order in which they are pushed.
    - if the stack is empty, then "Underflow" occurs.

3. Peek or Top
    - Returns the top element of the stack

4. isEmpty
    - Returns true if stack is empty, else fails

<!-- Stack Depiction -->

http://imgur.com/a/GtaV7

<!-- Real Life Examples -->

Consider the simple example of plates stacked over one another in canteen. The plate which is at the top is the first one to be removed, i.e. the plate which has been placed at the bottommost position remains in the stack for the longest period of time. So, it can be simply seen to follow LIFO/FILO order.

<!-- Time Complexities of operations on stack: -->

- push(), pop(), isEmpty(), peek() all take O(1) time
    - we are not running a loop for any of these operations

<!-- Applications of Stack -->

- Redo/undo in many editors, photoshop
- Forward and backward feature in web browsers
- Used in many algos like Tower of Hanoi, tree traversals

<!-- Ways of implementing a stack -->

- using an array
- using a linked list

<!-- Pros of using array for stacks -->
- easy to implement. Memory is saved as pointers are not involved

<!-- Cons of using array for stacks -->
- it is not dynamic. It doesn't grow and shrink depending on needs at runtime

<!-- Pros of using linked list for stacks -->
- can grow and shrink according to needs at runtime

<!-- Cons of using linked list for stacks -->
- requires extra memory due to involvement of pointers
