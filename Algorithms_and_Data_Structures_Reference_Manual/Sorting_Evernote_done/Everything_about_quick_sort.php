<!-- What happens in Quick Sort -->

- it is a Divide and Conquer algorithm
- it picks up an element as pivot and partitions the given array around the picked pivot

<!-- Code  -->
https://ideone.com/NA9aI3

<!-- Process -->
- the key process is the "partition" function
- The idea is that given an arrya and an element "pivot" as the pivot, put it into its correct
position in the sorted array and put all smaller elements(not necessarily sorted) before "pivot" and
put all greater elements(not necessarily sorted) after "pivot"
- Do this in linear time

<!-- Analysis of Quick Sort -->

Time taken can be written as
T(n) = T(k) + T(n-k-1) + theta(n)

- the first two terms are for 2 recursive calls, the last term is for the partition process
- "k" is the number of elements which are smaller than the pivot
- The time taken by Quicksort depends upon the input array and partition strategy

<!-- When Quick sort is not stable -->

Eg - 6 | 6 | 5 | 7

<!-- Why is choosing the pivot is important -->

- In most quick sort implementations we will choose either the "first" element or the "last" element as the pivot

- In an ideal quick sort algorithm, the pivot will always be the "middle most" element, so that when we partition the list into sublists
they would be equal in size

<!-- Explanation of what happens in the "partition function" when the pivot is chosen as "last element" -->

- Choose the pivot as the last element
- Maintain the index of all elements which are bigger than the pivot
    - for that initialize "i" as "low index"

- Start the loop with "j" as "low index" and run uptil the penultimate element
    - check if the current "j" positioned element is less than or equal to the "pivot"
        - if yes, then swap the current "i" positioned element with the current "j" positioned element
        - increment the value of "i" , since the previous "i" now has a smaller element than the pivot at its position

- After the loop is over, all elements less than the pivot are at their current positions
- Swap the pivot with the element at the current position of "i"

- return the current position of "i" as the new partition position

<!-- Explanation of what happens in the "partition" function when the pivot is chosen as "first element" -->

- Chose the pivot as the first element
- Maintain the index of all elements which are bigger than the pivot
- for that initialize "i" as "low index + 1"

- perform the same operations for the loop as above
- after the loop is over, all elemnts less than the pivot are at their current position
- since, we had "i++" in the "if" condition, the desired position of the pivot is one step ahead

- Therefore, we put the pivot at the one position less than the current value of "i"
    - a[i-1] = pivot
- we also put the current element at that position (i-1) , in place of the first position of that array/subarray

    - a[low] = a[i-1]


- return "i-1" as the partition position

<!-- Explanation of what happens in the "partition" function when the pivot is chosen as "middle element" -->

- Calculate the "middle" index using low and high
- set the pivot as the middle element

- Check whether "low" is less than equal to "high" using while loop
- We are trying to ensure that all elements less than the middle element stay on its left and all elements more than stay on its right

- We keep on incrementing the lower index when the present positioned element is less than pivot (check through while loop)
- We keep on decrementing the higher index when the present positioned element is more than pivot (check through while loop)

- if none of the above is true, it means we have encountered a scenario where the lower index element is more than the pivot and the
higher index element is lower than the pivot (provided the lower index is less than the higher index)
- in such a case, the elements are misplaced
- so we swap them and increment the lower index and decrement the higher index

- after all this is done, we return the position of the lower index as the new partition element

<!-- Loop invariant for "pivot" as first and last element -->

- At any point , if we stop the for loop, then we can be sure, that all elements till the present value of "i" are less than the pivot

<!-- Worst case scenario -->
- when the elements are already sorted (ascending or descending) or all elements are same
- the pivot is chosen as the last element, so the loop will run "n-1" times

Recurrence is T(n) = T(n-1) + cn
                               = T(n-2) + c(n-1) + cn
                               = T(n-2) + 2(cn) - c

                               = T(n-3) + 3cn - 3c

                               = T(n-k) + kcn - (1+2 + 3 _ .... k-1)c
                               = T(n-k) + kcn - (k * (k-1)/2)*c

                               Put n-k = 1

                               = T(1) + cn^2 - n(n-1)/2 * c

                               = cn^2/2 + cn/2 + c1
                               = O(n^2)

- To put one element in its correct position, we have to call the partition function which takes O(n) time
- For all "n" elements it will be O(n^2)

<!-- How the recursion tree looks in worst case -->

https://imgur.com/a/iFZPN

<!-- Best case scenario-->

- When the pivot is chosen as middle element
- both the subarrays will always be of equal size

Recurrence T(n) = 2T(n/2) + cn
                            = 2^kT(n/2^k) + kcn

                            let n/2^k = 1
                            k = logn(Base 2)

                            = nlogn

** The Time complexity of quick sort depends on
- what we choose our partition to be
- how sorted the list already is

** For arrays that are nearly or completely sorted, quicksort operates at its worst

<!-- How the recursion tree looks in best case scenario  -->
https://imgur.com/a/xVHRN

<!-- How the recursion tree looks in average case -->
https://imgur.com/a/yEh4l

<!-- Properties of quicksort -->

https://imgur.com/a/DKAtL


<!-- How can we optimize quick sort  -->

- Instead of calling a partion function inside Quicksort function call the Randompartition function

Randompartition(int a[], int l, int h)
{
    int pivot = rand(l,h);
    return pivot
}

partition(int a[], int l, int h)
{
    int pivot = Randompartition(a, l ,h)
    //rest of the code for partitioning
}

Quicksort(int a[], int l, int h)
{
    Randompartition(a,l,h)

    Quicksort()
    Quicksort()
}

<!-- Space complexity: -->

Best case : O(logn)
Worst case : O(n)

<!-- When is Quick Sort better than Merge Sort -->
- when the size of input is small
- this is because Merge sort involves a lot of function calling and extra space

<!-- When is Merge Sort better than quick sort -->
- stability ends up being the reason why people choose merge sort over quick sort

** Quick sort outperforms insertion sort and selection sort as well
