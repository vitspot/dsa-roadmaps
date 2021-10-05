class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        lookup = {}
        for i,n in enumerate(nums):
            if target-n in lookup:
                return [lookup[target-n],i]
            lookup[n] = i        