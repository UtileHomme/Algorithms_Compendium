<!-- Big O Cheat Sheet -->

http://bigocheatsheet.com/

<!-- Why Quick Sort is better than merge sort -->

1. Auxiliary space
- Merge sort uses extra space while quicksort requires little space and exhibits good cache locality
- Quick sort is an in-place algorithm. Mergesort requires a temporary array to merge the sorted arrays and hence it is not in-place

2. Worst Cases
- the worst cases of quicksort O(n^2) can be avoided by using randomized quick sort. It can also be avoided with high probability by choosing the right pivot

3. Merge sort is better for large data structures
- Mergesort is a stable sort, unlike quicksort and can be easily adapted to operate on a linked list and very large lists stored on slow-to-access media such as disk storage

<!-- Difference between merge and insertion sort -->

https://imgur.com/a/CoRXi

<!-- Comparison of Big O Functions -->

https://imgur.com/a/g1WNO
