class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,len;
        len=size(nums);
        vector<int> ans;
        for(i=0;i<len;i++){
            ans.push_back(nums[i]);
        }
        for(i=0;i<len;i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
};