class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        def helper(i,j,nums):
            while(i<j):
                nums[i],nums[j] = nums[j],nums[i]
                i+=1
                j-=1
        k = k % (len(nums))
        
        helper(0,len(nums)-1,nums)
        helper(0,k-1,nums)
        helper(k,len(nums)-1,nums)
