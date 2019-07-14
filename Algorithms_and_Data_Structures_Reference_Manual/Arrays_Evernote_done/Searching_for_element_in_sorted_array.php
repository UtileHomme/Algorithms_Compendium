<!-- How to search for an element in  a sorted array -->

<!-- Process -->

-- Perform Binary search since the array is sorted

- Pass the following parameters inside the function
- the array
- the lower bound
- the upper bound
- the key to be searched

- First, check whether the lower bound is less than or equal to the upper bound or not
- if not , return "-1"
- else , proceed

- Calculate the value of the middle index
- if a[mid] == key, the return "mid" as the position of the key
- if a[mid]<k, update the value of lower bound as "mid+1", since we need to search in the right half
- else, update the value of upper bound as "mid-1", since we need to search in the left half

<!-- Code -->
https://ideone.com/UIRdlU

<!-- Time Complexity  -->
O(Log n) [Using Binary Search]
