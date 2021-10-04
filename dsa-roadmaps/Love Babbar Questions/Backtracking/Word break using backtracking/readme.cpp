Given a string s and a dictionary of words dict of length n, add spaces in s to construct a sentence where each word is a valid dictionary word. Each dictionary word can be used more than once. Return all such possible sentences.
 Your task is to complete the function wordBreak() which takes n, dict and s as input parameters and returns a list of possible sentences. If no sentence is possible it returns an empty list.

Expected Time Complexity: O(N2*n) where N = |s|
Expected Auxiliary Space: O(N2)

Constraints:
1 ≤ n ≤ 20
1 ≤ dict[i] ≤ 15
1 ≤ |s| ≤ 500 