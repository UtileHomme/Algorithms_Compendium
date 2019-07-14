<!-- Problem -->
http://www.geeksforgeeks.org/selection-sort/

<!-- Codes -->
http://ideone.com/0m6bfH

<!-- What happens in Selection Sort -->

<!-- This is the case of ascending order sorting -->
The idea is to find the CURRENT POSITION of the minimum element in the array from the unsorted part
and putting it at its CORRECT POSITION in the SORTED ARRAY.
Two sub-arrays are maintained.
1. Already sorted subarray
2. Remaining subarray which is unsorted

<!-- Process -->
Initiallly we take the first element and assume it as minimum POSITIONED ELEMENT.
We then traverse the entire remaining array (i.e. from second element to end) to find the minimum POSITION if there exists one
by comparing the first element with the remaining array.

When the minimum POSITION is found(if at all) after having traversed the entire array, we swap the first element along with the minimum element.
Now the Minimum element is at its corrent place. We have a sorted subarray at the left of the "first loop" variable now.

We now consider the second POSITIONED element as the smallest and start traversing from the third element to end to find the minimum.
We carry out the above process till the entire array is sorted.

<!-- Example with Explanation -->

Input Array = 23   |   10   |  5  |   6   | 7
                        0          1      2      3     4

i = 0 ;
min = 0
j = 1

Checking if (a[min]>a[j])   .ie. 23 > 10   ... true

Therefore, element at index "0" is no longer the minimum, but at position 1 is

min = 1
j = 2

10 > 5... true , therefore element at position 2 is min

min = 2
j = 3

5 > 6 .. false

min = 2
j = 4

5 > 7 .. false

end the second loop

i =0 , min = 2

swap these. Array looks like:

5   |   10   |  23  |   6   | 7
0          1      2      3     4

i = 1 , min = 1
** All elements to the left of the "current value of i" are sorted.

Carry this process out over and over again till the first loop reaches "n-1"

<!-- Calculating Time Complexity -->

<!-- Worst case -->
Consider the array 3  |  2  |  3

n = 3

for i = 0 , the second loop (j) runs 2 times =  (n-1)
for i = 1 ,  the second loop runs 1 time = (n-2)

Since, in a general case, "n" is unknown we have the following expression

T(n) = (n-1) + (n-2) + (n-3) + ...................... + (n- (n-1)) + 0
        = sum of "n" natural numbers
        = O(n^2)

<!-- Best Case -->

Assume it is sorted
- if we carefully look at the code, both for loops will still run to make the comparisons irrespective of whether the array is sorted or not
- We have the exactly same scenario as above
- Therefore, T(n) = O(n^2)

<!-- Auxilliary space -->
O(1)

<!-- Why is it an in-place sort algorithm -->

- All the operations are taking place in the same array.
- We are not using any extra memory or a separate array to copy the elements to and then sort

<!-- Why is it a stable-sort algorithm -->

Assume this array

23 | 10 | 6  | 99  | 6

Let the position of first "6" be an alias "a" and that of second "6" be an alias "b"

- even after all the comparisons, we notice that the alias "a" will come before "b" in all cases
- In the input array the same elements are coming at the original arrangment in which they were placed
- Hence proved

<!-- Condition of Invariance -->

- We are trying to maintain two subarrays
- Sorted and unsorted

- We can be sure that what ever be the position of the "first loop variable (here it is "i")" , the elements to its left will always be sorted

<!-- Condition of Termination -->

- In the first loop , we have mentioned that the loop should end at "n-1"

<!-- What is the good thing about Selection Sort -->
- It never makes more than O(n) swaps and can be useful when writing to memory is a costly operation
- It keeps track of what is sorted and what is not sorted, and it will continue to sort until the unsorted “list” is completely empty.
- It is useful when we are trying to sort a small dataset

<!-- Another way of understanding Selection Sort -->
https://imgur.com/a/6yMPP

<!-- Selection Sort in a nutshell -->
https://imgur.com/a/R6JYP
