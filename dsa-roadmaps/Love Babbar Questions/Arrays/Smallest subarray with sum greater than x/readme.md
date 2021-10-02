## Smallest subarray with sum greater than x

Given an array of integers (A[])  and a number x, find the smallest subarray with sum greater than the given value.

Note: The answer always exists. It is guaranteed that x doesn't exceed the summation of a[i] (from 1 to N).

 

Example 1:
```C
 Input:
 A[] = {1, 4, 45, 6, 0, 19}
 x  =  51
 Output: 3
 Explanation:
 Minimum length subarray is 
 {4, 45, 6}
```
Example 2:
```C
 Input:
 A[] = {1, 10, 5, 2, 7}
 x  = 9
 Output: 1
 Explanation:
 Minimum length subarray is {10}
```
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N, x ≤ 10<sup>5</sup>
1 ≤ A[] ≤ 10<sup>4</sup>
