class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,len;
        len=nums.size();
        vector<int> ans;
        for(i=0;i<len;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};