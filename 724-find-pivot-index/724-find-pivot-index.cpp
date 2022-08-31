class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i,n=nums.size(),ans=-1,num=nums[n-1];
        for(i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        if(nums[n-1]-nums[0]==0)
            ans=0;
        for(i=1;i<n-1 && ans==-1;i++){
            if(nums[i-1]==nums[n-1]-nums[i]){
                ans=i;
            }
        }
        if(ans==-1 && nums[n-1]-num==0)
            ans=n-1;
        return ans;
    }
};