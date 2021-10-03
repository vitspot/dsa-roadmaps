## Problem statement
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

* enqueue(x) : Add an item x to rear of queue
* dequeue() : Remove an item from front of queue
* size() : Returns number of elements in queue.
* front() : Finds front item.

## Example
```
Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: After reversing the given input from the 3rd position the resultant output 
will be 3 2 1 4 5.
```
```
Input:
4 4
4 3 2 1

Output: 
1 2 3 4

Explanation: After reversing the given input from the 4th position the resultant output will be 1 2 3 4.
```

## Constraints
1 <= N <= 1000

1 <= K <= N

