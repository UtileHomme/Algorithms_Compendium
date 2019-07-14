<!-- What is Sorting -->

- arranging the elements in a list or collection in increasing or decreasing order of some property

<!-- What is the difference between internal and external sorting  -->

Internal Sorting
- all the data is sorted in the memory at all times even while the sorting is in progress
- here, we can access any array elements at whatever moment we want

External Sorting
- here data is stored outside in the memory (like on disk) and only loaded into the main memory in small chunks
- usually applied when data can't fit into memory entirely

- since ALL data is not available in the memory we can't randomly access any element in memory
- accessing it on the disk is very slow

<!-- What is In-place sorting -->

- The idea is about SPACE EFFICIENCY - using minimum amount of RAM, hard disk or other storage

- The idea is to produce the output in the same memory space that contains the input by successively transforming
data until the output is produced.
- this avoids the need to use twice the storage - one area for the input and an equal sized area for the output

- It makes no sense to copy punched cards into another memory space just to sort them

Eg - Quick Sort

** Algorithms can be classified as Recursive or Non-recursive

1. Recursive
    - Quick Sort
    - Merge Sort

2. Non-recursive
    - Insertion Sort
    - Selection Sort
