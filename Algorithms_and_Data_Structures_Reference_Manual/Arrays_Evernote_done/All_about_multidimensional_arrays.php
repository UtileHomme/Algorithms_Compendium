<!-- Evernote done -->

<!-- What are multi-dimensional arrays -->
<!-- Reference - https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/ -->

- arrays of arrays
- data in multi-dimensional arrays are stored in tabular form (row major order)

<!-- Representation of N-dimensional arrays -->
https://imgur.com/a/W4To1

** Total number of elements that can be stored in a multidimensional array can be calculated by
multiplying the size of all dimensions

Eg -
The array int x[10][20] can store 200 elements

<!-- 2-D arrays -->
Eg -
int x[10][20];

- Elements in 2-D arrays are referred by x[i][j] where "i" is the row number and "j" is the column number

https://imgur.com/a/ZrUiv

<!-- Initializing 2-D arrays -->

<!-- Method 1 -->
int x[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

- the above array has 3 rows and 4 columns
- the elements will be filled in the array in the order, first "4" elements from the left in first row , next 4 elements in second row and so on

<!-- Method 2 -->
int x[3][4] = {{0,1,2,3}, {4,5,6,7}, {8,9,10,11}}

<!-- Accessing elements -->

int x[2][1];

<!-- Initializing 3-D arrays -->

<!-- Method 1 -->
int x[2][3][4] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};

<!-- Method 2 -->
int x[2][3][4] = {
    {
        {0,1,2,3},{4,5,6,7},{8,9,10,11},
        {12,13,14,15},{16,17,18,19},{20,21,22,23}
    }
};
