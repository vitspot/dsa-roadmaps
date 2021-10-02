class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(map.find(target-nums[i])!=map.end()) // traversing the map and if found go inside loop else if element not in map it will go till end and go after loop
            {
                v.push_back(map[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            map[nums[i]]=i;
        }
        return v;
    }
};
