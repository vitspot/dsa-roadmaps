Given three stacks of the positive numbers, the task is to find the possible equal maximum sum of the stacks with the removal of top elements allowed. Stacks are represented as an array, and the first index of the array represent the top element of the stack.
The idea is to compare the sum of each stack, if they are not same, remove the top element of the stack having the maximum sum.
Algorithm for solving this problem: 

Find the sum of all elements of in individual stacks.
If the sum of all three stacks is the same, then this is the maximum sum.
Else remove the top element of the stack having the maximum sum among three of stacks. Repeat step 1 and step 2.
The approach works because elements are positive. To make sum equal, we must remove some element from stack having more sum, and we can only remove from the top.