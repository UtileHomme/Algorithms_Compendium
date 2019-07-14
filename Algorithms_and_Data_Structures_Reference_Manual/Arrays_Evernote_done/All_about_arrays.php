<!-- Evernote done -->

<!-- What is an Array -->
<!-- Reference - https://www.geeksforgeeks.org/arrays-in-c-language-set-1-introduction/ -->

- an array is a collection of items stored in continuous memory locations.
- the idea is to declare multiple items of the same type

<!-- Methods of declaration -->

int a[10];

int a[] = {10,20,39};

// Compiler creates an array of size 6, initializes first
// 4 elements as specified by user and rest two elements as 0.
// below is same as  "int arr[] = {10, 20, 30, 40, 0, 0}"
int a[6] = {10, 20, 30, 40};

<!-- How to access arrays -->

- arrays are accessed using their index
- array index starts with 0 and ends with "size of array - 1"

<!-- Example -->
int main()
{
  int arr[5];
  arr[0] = 5;
  arr[2] = -10;
  arr[3/2] = 2; // this is same as arr[1] = 2
  arr[3] = arr[0];

  printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);

  return 0;
}

*** In C++, it is a compiler error if we initialize array elements more than the specified size. In C, it is not

<!-- Example -->

//Will give compiler error
int main()
{

  // Array declaration by initializing it with more
  // elements than specified size.
  int arr[2] = {10, 20, 30, 40, 50};

  return 0;
}

<!-- How to retrieve the "address" part of an array element -->

- use "&a[i]" for this purpose

<!-- How to initialize any variable with the min/max "Integer" value -->

#include <climits>

int a = INT_MIN / MAX

<!-- Difference between &array and array -->

<!-- Reference - https://www.geeksforgeeks.org/whats-difference-between-array-and-array-for-int-array5/ -->
<!-- Reference - https://arjunsreedharan.org/post/69303442896/the-difference-between-arr-and-arr-how-to-find -->
<!-- Reference - https://cboard.cprogramming.com/c-programming/104402-arrayplus-1-arrayplus1-diff.html -->

- "array" is a pointer to the first element of the array
- "&array" is a pointer to whole array of int [5]

- addition of 1 to "array" moves the address by only one position
- addition of 1 to "&array" moves the address by the (size of the array * element type)

https://imgur.com/a/XqRD06z
