class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size(),i;
        vector <int> s_nums(n);
        s_nums[0] = nums[0];
        for(i=1;i<n;i++){
            s_nums[i] = s_nums[i-1] + nums[i];
        }
        return s_nums;
    }
};