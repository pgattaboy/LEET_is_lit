class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> r(2*n);
        int i,j=0;
        for(i=0;i<n;i++,j+=2){
            r[j]=nums[i];
            r[j+1]=nums[i+n];
        }
        return r;
    }
};