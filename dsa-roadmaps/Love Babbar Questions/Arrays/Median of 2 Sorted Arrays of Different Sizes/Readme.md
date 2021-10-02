## Median of 2 Sorted Arrays of Different Sizes
### Problem statement
The task is to complete the function MedianOfArrays() that takes array1 and array2 as input and returns their median. 

Example 1:

    Input:
    m = 3, n = 4
    array1[] = {1,5,9}
    array2[] = {2,3,6,7}
    Output: 5
    Explanation: The middle element for
    {1,2,3,5,6,7,9} is 5
    
Example 2:

    Input:
    m = 2, n = 4
    array1[] = {4,6}
    array2[] = {1,2,3,5}
    Output: 3.5

**Link** : https://practice.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1

Expected Time Complexity: O(min(log n, log m))
Expected Auxiliary Space: O((n+m)/2)

**Constraints**:
0 ≤ m,n ≤ 104
1 ≤ array1[i], array2[i] ≤ 105

Tag : **Medium**
