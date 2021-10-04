class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n = len(nums)
        l,r = 0,n-1
        
        while l<r:
            m = (l+r)//2
            if nums[m] == target:
                return m
            elif nums[m]<target:
                l = m+1
            else:
                r = m-1
        
        if nums[l] == target: return l
        return -1