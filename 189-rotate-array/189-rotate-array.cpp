class Solution {
public:
    void rotate(vector<int>& nums, int k) {
           //reverse(v.begin(),v.end()) reverses the whole vector
        //we can specify from where our function can start reversing...except the .end() everyother ending value is exclusive.
        int n=nums.size();
        k%=n;
        reverse(nums.begin(),nums.end());
      
        reverse(nums.begin(),nums.begin()+k);
       
        reverse(nums.begin()+k,nums.end());
        
    }
};