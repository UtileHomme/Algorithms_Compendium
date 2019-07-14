<!-- What are double ended queues in stl -->

<!-- Reference - https://www.geeksforgeeks.org/deque-cpp-stl/ -->

- are sequence containers with the feature of expansion and contraction on both the ends
- they are similar to vectors, but more efficient in case of insertion and deletion of elements at the end, and also the beginning

** Unlike vectors, contiguous storage allocation may not be guaranteed

 ** The functions are same as in vectors with an addition of push and pop operations for both front and back

<!-- empty() and size function in deque -->

<!-- Reference -  https://www.geeksforgeeks.org/dequeempty-dequesize-c-stl/ -->

1. empty()
- is used to check if the deque container is empty or not

<!-- Syntax : -->

dequename.empty()

<!-- Parameters : -->

No parameters are passed.

<!-- Returns : -->
True, if deque is empty
False, Otherwise

<!-- Examples: -->

Input :   mydeque
          mydeque.empty();
Output :  True

Input :   mydeque = 1, 2, 3
          mydeque.empty();
Output :  False

2. size()
- is used to return the size of the deque container or the number of elements in the deque container.

<!-- Syntax : -->

dequename.size()

<!-- Parameters : -->

No parameters are passed.

<!-- Returns : -->

Number of elements in the container.

<!-- Examples: -->

Input :   mydeque = 0, 1, 2
          mydeque.size();
Output :  3

Input :   mydeque = 0, 1, 2, 3, 4, 5
          mydeque.size();
Output :  6

<!-- front and back function in deque -->

<!-- https://www.geeksforgeeks.org/dequefront-dequeback-c-stl/ -->

1. front()
- used to reference the first element of the deque container
- can be used to fetch the first element of a deque

<!-- Syntax -->

dequename.front()

<!-- Examples -->

Input  :  mydeque = 1, 2, 3
          mydeque.front();
Output :  1

Input  :  mydeque = 3, 4, 1, 7, 3
          mydeque.front();
Output :  3

2. back()
- used to reference the last element of the deque container
- can be used to fetch the first element from the back of the queue

<!-- Syntax -->

dequename.back()

<!-- Examples -->

Input  :  mydeque = 1, 2, 3
          mydeque.back();
Output :  3

Input  :  mydeque = 3, 4, 1, 7, 3
          mydeque.back();
Output :  3

<!-- clear and erase functions -->

<!-- https://www.geeksforgeeks.org/dequeclear-dequeerase-c-stl/ -->

1. clear()

- used to remove all the elements of the deque container

<!-- Syntax -->

dequename.clear()

<!-- Parameters : -->

No parameters are passed.

<!-- Result : -->

All the elements of the deque are
removed ( or destroyed )

<!-- Example -->

Input  : mydeque = {1, 2, 3, 4, 5}
         mydeque.clear();
Output : mydeque = {}

Input  : mydeque = {}
         mydeque.clear();
Output : mydeque = {}

2. erase()

- is used to remove elements from a container from the specified position or range

<!-- Syntax -->

1. dequename.erase(position)
2. dequename.erase(startingposition, endingposition)

<!-- Parameters : -->

Position of the element to be removed in the form of iterator.
or the range specified using start and end iterator.

<!-- Result : -->

Elements are removed from the specified
position of the container.

<!-- Examples -->

Input  : mydeque{1, 2, 3, 4, 5}, iterator= 2
         mydeque.erase(iterator);
Output : 1, 2, 4, 5

Input  : mydeque{1, 2, 3, 4, 5, 6, 7, 8}, iterator1= 3, iterator2= 6
         mydeque.erase(iterator1, iterator2);
Output : 1, 2, 3, 8
