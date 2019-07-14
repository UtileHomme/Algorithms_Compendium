<!--  How to find an element that occurs odd number of times from an array-->

<!-- Process -->

- We'll be using two "for" loops
- The first one selects one element at a time
- The second one traverses the entire array
- We compare the element from the first loop with all the elements from the second loop
- If a match is found, we increment the "count" by 1.
- After the second loop has finished, we now have an exact count of an element from first loop repetitions
- Check if this "count" is divisible by 2 or not
- if not divisible, then this is the element which occurs odd number of times
- return this element from the array

- if all element counts are divisble by "2", there is no element in the array which has odd occurrence

<!-- Code -->
https://ideone.com/dERRr9

<!-- Time Complexity -->
Because there are nested loops , Time Complexity = O(n^2)
