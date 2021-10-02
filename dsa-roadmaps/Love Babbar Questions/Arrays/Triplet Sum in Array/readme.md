## Triplet Sum in Array 

Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.

 
Example 1:
```C
Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.
```
Example 2:
```C
Input:
n = 5, X = 10
arr[] = [1 2 4 3 6]
Output:
1
Explanation:
The triplet {1, 3, 6} in 
the array sums up to 10.
```

Expected Time Complexity: O(n^2)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ n ≤ 10^3
1 ≤ A[i] ≤ 10^5
