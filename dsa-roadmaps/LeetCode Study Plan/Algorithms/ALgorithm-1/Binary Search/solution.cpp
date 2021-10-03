class Solution {
public:
    int binarySearch(vector<int>& arr, int l, int r, int t){
        if(r >= l){
            int mid = l + (r-l) / 2;
            if(arr[mid] == t){
                return mid;
            }
            
            if(arr[mid] > t){
                return binarySearch(arr, l, mid-1, t);
            } else {
                return binarySearch(arr, mid+1,r, t);
            }
            
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        
        return binarySearch(nums, l, r, target);
    }
};