class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        vector<vector<int>>ans;

        if(n<2)
            return ans;

        for(int i=0; i<n-2; i ++)
        {
            if(i==0 || (i>0 && nums[i]!=nums[i-1]))
            {
                int low =i+1,hi=n-1,sum=0-nums[i];
                while(low<hi)
                {
                    if(nums[low]+nums[hi]==sum)
                    {
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[hi]);
                        ans.push_back(temp);
                        while(low<hi and nums[low]==nums[low+1]) low++;
                        while(low<hi and nums[hi]==nums[hi-1]) hi--;
                        low++;
                        hi--;

                    }
                    else if(nums[low]+nums[hi]<sum)
                        low++;
                    else
                        hi--;
                }
            }
        }
        return ans;
    }
};
