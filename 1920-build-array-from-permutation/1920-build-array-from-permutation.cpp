class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int i,n=nums.size();
       vector <int> v(n);
        for(i=0;i<n;i++){
            v[i]=nums[nums[i]];
        }
        return v;
    }
};