// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int64_t l = 1, r = n, mid = (l+r)/2;
        
        while(l<=r){
            if(isBadVersion(mid)){
                r = mid-1;
            } else{
                l = mid+1;
            }
            mid = (l+r)/2;
        }
        return l;
    }
};
