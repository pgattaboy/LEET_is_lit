class Solution {
public:
    int arraySign(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
                nums[0]*=-1;
            else if(nums[i]==0){
               return signFunc(0);
            }
            else
                nums[0]*=1;
        }
        return signFunc(nums[0]);
    }
    int signFunc(int x){
    if(x<0)
        return -1;
    else if(x>0)
        return 1;
    else
        return 0;
}
};