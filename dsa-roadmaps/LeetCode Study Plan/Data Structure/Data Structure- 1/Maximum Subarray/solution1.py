# Kaden's algorithms https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        max_sum = float(-inf)
        cur_sum = 0
        for n in nums:
            cur_sum = max(cur_sum+n,n)
            max_sum = max(max_sum,cur_sum)
        return max_sum