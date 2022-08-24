class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,len;
        len=size(nums);
        nums.resize(2*len);
        for(i=0;i<len;i++){
            nums[i+len]=nums[i];
        }
        return nums;
    }
};