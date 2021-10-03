class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target > nums[nums.size()-1]){
            return nums.size();
        }
        int l = 0, r = nums.size()-1;
        int mid;
        while(r > l) {
            mid = l + (r - l) / 2;
            
            if(nums[mid] == target)
                return mid;
            
            if(nums[mid] > target){
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        
        return l;
    }
};