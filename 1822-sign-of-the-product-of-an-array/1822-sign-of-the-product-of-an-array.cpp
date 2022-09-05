class Solution {
public:
    int arraySign(vector<int>& nums) {
        if(nums[0]<0)nums[0]=-1;
        else if(nums[0]>0)nums[0]=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
                nums[0]*=-1;
            else if(nums[i]==0){
               return 0;
            }
            else
                nums[0]*=1;
        }
        return nums[0];
    }
};