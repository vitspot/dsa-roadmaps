## Diameter of Binary Tree

Given a Binary Tree, find diameter of it.
The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).

Example 1:
```C
Input:
       1
     /  \
    2    3
Output: 3
```

Example 2:
```C
Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4
```

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 10000
1 <= Data of a node <= 1000