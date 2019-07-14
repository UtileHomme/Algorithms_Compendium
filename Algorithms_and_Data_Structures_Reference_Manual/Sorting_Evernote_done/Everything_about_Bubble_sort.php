<!-- Problem -->
http://www.geeksforgeeks.org/bubble-sort/

<!-- Code -->
https://ideone.com/l2fWxd

<!-- What happens in Normal Bubble Sort -->

- it works by repeatedly swapping the adjacent elements if they are in the wrong order

<!-- Process -->

- The first loop decides the number of passes required for complete sorting
- we have to go till the penultimate element
- this is because we have the elements in descending order from right
- at the end of this loop, the first element will be at its correct position

- For the second loop, we "ALWAYS" start from the first index
- We go to the penultimate element (this is decided on the basis of the current value of the "looping element" in the first loop)
- After the second loop completes, the last element is the "LARGEST" element, hence the previous point

- In the second loop, we check whether the current element is larger than the element beside it
- if yes, we swap else we continue with the second loop

<!-- Calculating the Time Complexity -->

<!-- Worst or normal case -->

Consider the array 5  |  7  |  2 |  1  | 9  | 11
- even if it's reverse sorted

for i = 0, whatever be the nature of the elements, the loop will run from 0 to n-1
 - i.e. , all the numbers will be compared
 , the loop runs (n-1) times

 for i=1, the loop runs (n-2) times

 T(n) = (n-1) + (n-2) + (n-3) + ............... + 0
         = sum of "n" natural numbers
         = O(n^2)

<!-- Number of iterations it takes to sort an array with bubble sort -->
In general, given a collection of n unsorted elements, it takes (n-1) iterations through the list in order to sort it using the bubble sort algorithm.

<!-- Condition of Invariance -->

- We are trying to make bubbles at the end
- We can be sure that whatever be the position of the "first loop variable" , that many elements will be sorted in descending order from the right

<!-- Condition of Termination -->

- In the first loop, we have mentioned that the loop should end at "n-1"
- "n-1" passes are required
- Also, we can assured that after all element have been swapped, we need not check for i = n because either the first element will be swapped with the second element or it will remain in its place


<!-- Time Complexity -->
O(n^2)

<!-- How to make Bubble Sort optimized -->

- Add a boolean variable and initialize it to "false" at the beginning of the first loop
- If the swapping happens at any point of time in the second loop (the "if" condition), set "boolean variable" to "true"
- At the end of the "first loop" just check whether the swapped value is "false" or "true"
- If set to "false" simply break out of the loop

<!-- Code -->
https://ideone.com/1yjd3V

<!-- General Facts -->
<!-- Reference - https://medium.com/basecs/bubbling-up-with-bubble-sorts-3df5ac88e592 -->

<!-- Best Case Time Complexity -->
- occurs when array is already sorted
- O(n)
- this is because after the first loop itself we will be able to judge whether the swapping happened or not

** Sorting is "In-place"
* It is "stable"

<!-- How is bubble sort good and bad -->

- A bubble sort is often considered the most inefficient sorting method since it must exchange items before the final location is known.
- These “wasted” exchange operations are very costly.
- However, because the bubble sort makes passes through the entire unsorted portion of the list, it has the capability to do something most sorting algorithms cannot.
- In particular, if during a pass there are no exchanges, then we know that the list must be sorted.
- A bubble sort can be modified to stop early if it finds that the list has become sorted.
- This means that for lists that require just a few passes, a bubble sort may have an advantage in that it will recognize the sorted list and stop

<!-- Bubble sort in a nutshell -->
https://imgur.com/a/mpvTQ
