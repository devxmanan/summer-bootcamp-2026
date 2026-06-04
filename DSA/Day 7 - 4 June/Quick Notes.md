Algorithm of banker's algorithm:
1. input avl_resources, max_demand, and allocation matrices.
2. need matrix = max_demand - allocation.
3. While there are processes that can be safely executed:
   a. Find a process whose need is less than or equal to the available resources.
   b. If such a process is found, execute it and release its allocated resources back to the available resources.
   c. Mark the process as completed and add it to the safe sequence.
4. If all processes are completed, the system is in a safe state and the safe sequence is valid. Otherwise, the system is in an unsafe state and a deadlock may occur.



Practice Questions:
1- Stack implementation using Array and Linked List
2- Queue implementation using Array and Linked List
3- Valid Parenthesis (Through Stack)
4- Infix, prefix and postfix implementation and conversion
5- Next Greater Element
6- Stock Span Problem
7- Implementation of min stack
8- Implementation of a queue using stack
9- Implementation of a stack using queue
10- Sliding Window Maximum
11- First negative in a window
12- Celebrity Problem
13- Largest Rectangle in a Histogram
14- Trapping Rain Water Problem
15- Generate Binary Numbers from 1 to N using Queue
16- Sort a stack using another stack
17- Delete middle element of a stack
18- Implement two stacks in an array
19- Reverse first k elements of a queue
20- Reverse a string using stack
21- Implement N-stacks in an array