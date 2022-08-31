// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1;
        int mid;
        int ans;
        
        while(low<=n){
            mid=low+(n-low)/2;
            if(isBadVersion(mid)){
                n=mid-1;
                ans=mid;
            }
            else
                low=mid+1;
        }
        return ans;
    }
};