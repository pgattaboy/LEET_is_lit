class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,len;
        len=size(nums);
        for(i=0;i<len;i++){
            nums.push_back(nums[i]);
        }
        return nums;
    }
};