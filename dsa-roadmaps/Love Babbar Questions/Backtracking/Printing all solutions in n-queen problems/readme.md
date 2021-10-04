The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other. For example, following is a solution for 4 Queen problem.
The N Queen is the problem of placing N chess queens on an N×N chessboard so that no two queens attack each other.
The task is to print all solutions in N-Queen Problem. Each solution contains distinct board configurations of the N-queens’ placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. For the example above solution is written as [[2 4 1 3 ] [3 1 4 2 ]]. The solution discussed here is an extension of the same approach.


Backtracking Algorithm 

The idea is to place queens one by one in different columns, starting from the leftmost column. When we place a queen in a column, we check for clashes with already placed queens. In the current column, if we find a row for which there is no clash, we mark this row and column as part of the solution. If we do not find such a row due to clashes then we backtrack and return false.