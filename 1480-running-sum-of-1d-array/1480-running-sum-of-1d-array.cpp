class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size(),i;
        for(i=1;i<n;i++){
            nums[i] = nums[i-1] + nums[i];
        }
        return nums;
    }
};