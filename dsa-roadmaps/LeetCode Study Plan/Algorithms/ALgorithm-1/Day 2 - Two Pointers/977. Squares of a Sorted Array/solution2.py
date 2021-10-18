class SquaresIterator(object):
    def __init__(self, sorted_array):
        self.sorted_array = sorted_array
        self.left_pointer = 0
        self.right_pointer = len(sorted_array) - 1
    
    def __iter__(self):
        return self
    
    def __next__(self):
        if self.left_pointer > self.right_pointer:
            raise StopIteration
        left_square = self.sorted_array[self.left_pointer] ** 2
        right_square = self.sorted_array[self.right_pointer] ** 2
        if left_square > right_square:
            self.left_pointer += 1
            return left_square
        else:
            self.right_pointer -= 1
            return right_square

class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        return_array = [0] * len(A)
        write_pointer = len(A) - 1
        for square in SquaresIterator(A):
            return_array[write_pointer] = square
            write_pointer -= 1
        return return_array