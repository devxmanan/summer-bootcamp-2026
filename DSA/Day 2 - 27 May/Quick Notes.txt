
------------------------
bit manipulation

-------------------------------------------------------------------------------------------------------------
Two Pointer:
The Two Pointer Technique is an algorithmic method where two pointers are used to traverse a data structure (usually an array or string) efficiently. It helps reduce time complexity from O(n²) to O(n) in many problems. Instead of using nested loops, use one pointer from beginning and another from end or two pointers moving at different speeds.

Types of Two Pointer Approaches:

Opposite Direction      ->  One pointer at start, one at end
Same Direction          ->  Both move forward
Fast & Slow Pointer     ->  One moves faster than other

------------------------------------------------------------------------------------------------------------

sliding window

------------------------------------------------------------------------------------------------------------

hashing: Hashing is a technique used to store and retrieve data quickly by converting a key into an index (address) using a hash function.
Instead of searching through the entire data structure, hashing directly computes where the data should be stored.

--------------------------------------------------------------------------------------------------------------

Dutch National Flag Algorithm:

The Dutch National Flag algorithm is used to sort an array containing only three types of values, usually:
0, 1, 2

It sorts them in one pass.

Example:

Input:  2 0 1 2 1 0
Output: 0 0 1 1 2 2

Use three pointers:

low -> position for next 0
mid -> current element
high -> position for next 2

---------------------------------------------------------------------------------------------------------------
Practice Questions:

1- Leaders in an array
2- Spiral traversal of matrix
3- Longest consecutive increasing subarray
4- frequency sort
5- Diagonal Difference in Matrix
6- Rotate matrix by 180
7- Sort 0s, 1s and 2s (DNF Algorithm)