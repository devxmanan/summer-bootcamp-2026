Default Values in Java:

int -> 0
double -> 0.0
Boolean -> false
char -> '\u0000'
string -> null

-----------------------------------------

Sparse Matrix: A sparse matrix is a matrix in which most of the elements are 0. Only a few elements are non-zero.

Dense Matrix: A matrix having mostly non-zero elements is called a dense matrix.

Jagged Matrix: A jagged matrix is a matrix in which rows contain different numbers of columns. Also called: Ragged array or Jagged array. C does not directly support jagged arrays like Java, but they can be created using pointers.

-------------------------------------------------------------------------------------------------------------------------------

Dangling Pointer: A pointer that points to a memory location that has been freed or deallocated. 

Memory Leak: A memory leak is a situation in which a program continuously allocates memory but fails to deallocate it, causing the program to consume more and more memory over time. In C/C++, memory leaks primarily occur when you allocate memory using `malloc`, `calloc`, or `realloc` but never release it using `free`.

Segmentation Fault: A segmentation fault (or segfault) is a runtime error that occurs when a program tries to access memory that it is not allowed to access. The operating system immediately terminates the program.

Void Pointer: A void pointer can store the address of any datatype. It is called a generic pointer.

Null Pointer: A null pointer is a pointer that does not point to any valid memory location. It is assigned the value NULL.

Wild Pointer: A pointer that is declared but not initialized is called a wild pointer.

---------------------------------------------------------------------------------------------------------------------------------

Difference Between Compile-Time Error and Segmentation Fault:
Occurs during compilation   |  Occurs during execution
Syntax/type mistake         |  Invalid memory access
Program doesn't run         |  Program crashes while running

-----------------------------------------------------------------------------------------------------------------------------------

Practice Questions:

1- Count Consonants
2- Largest Element in an array
3- Reverse each row of a matrix
4- Sum of boundary elements of a matrix
5- Delete the smallest element from an array