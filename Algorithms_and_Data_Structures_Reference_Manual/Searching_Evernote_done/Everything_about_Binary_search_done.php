Here the idea is to find the middle of the array and find whether the value of the
element to be found is less than or greater than or equal to that element.

If the element is less than the element at "mid" , we try to look
into the left side of the array (i.e. we set the ending value "h" = mid-1)

if the element is more than the element at "mid", we try to look
into the right side of the array (we set the lower bound "l" = mid+1)

if the element is = the element at "mid", we simply return the message
element found

In all other scenarios, we return -1, signifying the element couldn't be found

<!-- Time Complexity  -->

a. Can be written in the form of a Recurrence Relation as follows:

T(n) = T(n/2) + c

After solving this we get Theta(Logn) as the complexity

<!-- Auxiliary Space -->
The Auxilliary space taken is O(1) in case of iterative implementation
but in case of recursive implementation it is O(logn)

<!-- Algorithm Paradigm followed -->
Divide and Conquer

<!-- How many times can we split the search area in half before the vector becomes empty -->

GIF(logn(base2)) + 1

<!-- Eg -->
- When there are 15 elements, we needed 4 comparisons:
GIF(log15(base 2)) + 1

b. We keep on reducing the array size by "2" till the number of elements to be compared is = 1

It looks like this - https://imgur.com/a/Oheko

The number of steps taken for this give us the time complexity

n / 2 ^k = 1
2 ^k = n
k = log n (base 2)

<!-- Why we use "mid = low + (high-low)/2" -->

- This is because (low+high)/2 might exceed the MAX allowed INTEGRAL value
