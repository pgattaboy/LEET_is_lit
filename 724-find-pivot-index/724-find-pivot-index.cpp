class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long int i,n=nums.size(),ans=-1;
        long long int lsum=0,rsum=0;
        for(i=0;i<n;i++){
            rsum+=nums[i];
        }
        for(i=0;i<n;i++){
            rsum-=nums[i];
            if(lsum==rsum)
            {
                ans=i;
                break;
            }
            lsum+=nums[i];
        }
        return ans;
    }
};