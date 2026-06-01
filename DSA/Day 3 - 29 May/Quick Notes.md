
# 🔥 String Practice Questions

1- Remove Duplicate Characters
2- Find First Non Repeating Character 
3- Check if two strings are anagram or not 
4- Group Anagrams 
5- Longest Common Prefix 
6- Longest Common Subsequence 
7- Longest Palindromic Subsequence 
8- String Compression aaaabbb-> a4b3 
9- Longest Substring without repeating Characters 
10- Minimum Window Substring 
11- Valid Parenthesis (Through String)

## 1. Remove Duplicate Characters

**Problem:** Remove duplicate characters from a string while maintaining the original order.

**Example**

```text
Input:  "programming"
Output: "progamin"
```

**Concepts Used**

* Hashing
* `unordered_set`
* String Traversal

---

## 2. Find First Non-Repeating Character

**Problem:** Find the first character that appears only once in the string.

**Example**

```text
Input:  "aabbcdde"
Output: 'c'
```

**Concepts Used**

* Frequency Counting
* Hash Map (`unordered_map`)

---

## 3. Check if Two Strings are Anagrams

Two strings are anagrams if they contain exactly the same characters with the same frequencies.

**Example**

```text
Input:
listen
silent

Output:
True
```

**Concepts Used**

* Sorting
* Frequency Array
* Hash Map

---

## 4. Group Anagrams

Group strings that are anagrams of each other.

**Example**

```text
Input:
["eat","tea","tan","ate","nat","bat"]

Output:
[
 ["eat","tea","ate"],
 ["tan","nat"],
 ["bat"]
]
```

**Concepts Used**

* Hash Map
* String Sorting

---

## 5. Longest Common Prefix

Find the longest common prefix among an array of strings.

**Example**

```text
Input:
["flower","flow","flight"]

Output:
"fl"
```

**Concepts Used**

* String Comparison
* Sorting

---

## 6. Longest Common Subsequence (LCS)

Find the length of the longest subsequence present in two strings.

**Example**

```text
Input:
ABCDGH
AEDFHR

Output:
3
(ADH)
```

**Concepts Used**

* Dynamic Programming

---

## 7. Longest Palindromic Subsequence

Find the longest subsequence that forms a palindrome.

**Example**

```text
Input:
BBABCBCAB

Output:
7
(BABCBAB)
```

**Concepts Used**

* Dynamic Programming
* LCS Variation

---

## 8. String Compression

Compress consecutive repeating characters.

**Example**

```text
Input:
aaaabbbcc

Output:
a4b3c2
```

**Concepts Used**

* Two Pointers
* String Building

---

## 9. Longest Substring Without Repeating Characters

Find the length of the longest substring containing unique characters.

**Example**

```text
Input:
abcabcbb

Output:
3
(abc)
```

**Concepts Used**

* Sliding Window
* Hash Set

---

## 10. Minimum Window Substring

Find the smallest window in a string that contains all characters of another string.

**Example**

```text
Input:
S = "ADOBECODEBANC"
T = "ABC"

Output:
"BANC"
```

**Concepts Used**

* Sliding Window
* Hash Map

---

## 11. Valid Parentheses

Check whether brackets are balanced.

**Example**

```text
Input:
"{[()]}"

Output:
True
```

```text
Input:
"{[(])}"

Output:
False
```

**Concepts Used**

* Stack

---

# 🎯 Bonus Advanced String Algorithms

---

## 1. KMP Algorithm (Knuth-Morris-Pratt)

Used for efficient pattern matching.

### Time Complexity

```text
O(N + M)
```

### Concepts

* Prefix Function
* LPS Array (Longest Prefix Suffix)

### Applications

* Pattern Searching
* Text Editors
* DNA Matching

---

## 2. Rabin-Karp Algorithm

Uses hashing to find patterns in text.

### Time Complexity

```text
Average: O(N + M)
Worst: O(N × M)
```

### Concepts

* Rolling Hash
* Pattern Matching

### Applications

* Plagiarism Detection
* Multiple Pattern Searching

---

## 3. Z Algorithm

Computes the Z-array for efficient pattern matching.

### Time Complexity

```text
O(N)
```

### Concepts

* Prefix Matching

### Applications

* String Searching
* Pattern Detection

---

## 4. Shortest Palindrome

Convert a string into the shortest possible palindrome by adding characters only at the beginning.

### Example

```text
Input:
aacecaaa

Output:
aaacecaaa
```

### Concepts

* KMP
* Prefix Matching

---

# 📦 unordered_set in C++

---

## What is unordered_set?

`unordered_set` is a C++ STL container that stores **unique elements** in **no particular order** using a **hash table** internally.

Unlike `set`, elements are not sorted.

---

## Header File

```cpp
#include <unordered_set>
```

---

## Declaration

```cpp
unordered_set<int> s;
```

---

## Example

```cpp
#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(10);

    for(auto x : s)
        cout << x << " ";

    return 0;
}
```

### Output

```text
20 10 30
```

(Output order may vary)

---

# Key Characteristics

| Feature          | Description             |
| ---------------- | ----------------------- |
| Unique Elements  | No duplicates allowed   |
| Unordered        | No sorting maintained   |
| Fast Access      | Average O(1) lookup     |
| Hash Table Based | Internally uses hashing |
| Dynamic Size     | Automatically grows     |

---

# Common Operations

## Insert

```cpp
s.insert(5);
```

### Complexity

```text
O(1) Average
```

---

## Search

```cpp
if(s.find(5) != s.end())
{
    cout << "Found";
}
```

### Complexity

```text
O(1) Average
```

---

## Delete

```cpp
s.erase(5);
```

### Complexity

```text
O(1) Average
```

---

## Count

Returns 1 if element exists, otherwise 0.

```cpp
if(s.count(5))
{
    cout << "Exists";
}
```

---

## Size

```cpp
cout << s.size();
```

---

## Empty

```cpp
if(s.empty())
{
    cout << "Set is Empty";
}
```

---

## Clear

```cpp
s.clear();
```

---

# Time Complexities

| Operation | Average Case | Worst Case |
| --------- | ------------ | ---------- |
| Insert    | O(1)         | O(n)       |
| Search    | O(1)         | O(n)       |
| Delete    | O(1)         | O(n)       |
| Count     | O(1)         | O(n)       |

---

# set vs unordered_set

| Feature     | set            | unordered_set |
| ----------- | -------------- | ------------- |
| Ordering    | Sorted         | Unsorted      |
| Internal DS | Red Black Tree | Hash Table    |
| Search      | O(log n)       | O(1) Avg      |
| Insert      | O(log n)       | O(1) Avg      |
| Delete      | O(log n)       | O(1) Avg      |
| Duplicates  | Not Allowed    | Not Allowed   |

---
