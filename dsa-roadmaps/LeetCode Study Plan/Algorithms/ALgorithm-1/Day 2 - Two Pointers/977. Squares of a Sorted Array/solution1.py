class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        temp,ans = [],[]
        n = len(nums)
        i = j = 0
        
        while i<n and nums[i]<0:
            temp.insert(0,nums[i]**2)
            i+=1

        j = 0
        size = len(temp)
        
        while j<size and i<n:
            cur = nums[i]**2
            if cur<temp[j]:
                ans.append(cur)
                i+=1
            else:
                ans.append(temp[j])
                j+=1
        
        while j<size:
            ans.append(temp[j])
            j+=1
        
        while i<n:
            cur = nums[i]**2
            ans.append(cur)
            i+=1
        
        return ans