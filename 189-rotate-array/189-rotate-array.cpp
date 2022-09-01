class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),i;
        vector<int> res(n);
        for(i=0;i<n;i++){
            res[(i+k)%n]=nums[i];
        }
        for(i=0;i<n;i++)
           nums[i]=res[i];
    }
};