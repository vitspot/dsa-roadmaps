//Simple Brute Force and sorting

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) {
            if(nums[i]<0) nums[i]-=2*nums[i];
            nums[i]*=nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
