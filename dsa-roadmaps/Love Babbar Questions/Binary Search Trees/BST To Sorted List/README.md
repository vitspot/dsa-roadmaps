## Flatten BST to Sorted List

Given a binary search tree, the task is to flatten it to a sorted list. Precisely, the value of each node must be lesser than the values of all the nodes at its right, and its left node must be NULL after flattening. We must do it in O(H) extra space where ‘H’ is the height of BST.

Example 1: 

    Input: 
              5 
            /   \ 
           3     7 
          / \   / \ 
         2   4 6   8
    Output: 2 3 4 5 6 7 8

Example 2:

    Input:
          1
           \
            2
             \
              3
               \
                4
                 \
                  5
    Output: 1 2 3 4 5
