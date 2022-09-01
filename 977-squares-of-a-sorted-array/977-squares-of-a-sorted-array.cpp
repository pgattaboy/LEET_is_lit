class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i,n=nums.size(),l=0,r=n-1;
        vector <int> res(n);
        for(i=n-1;i>=0;i--){
            if(abs(nums[l])>abs(nums[r])){
                res[i]=nums[l]*nums[l];
                l++;
            }
            else{
                res[i]=nums[r]*nums[r];
                r--;
            }
        }
        return res;
    }
};