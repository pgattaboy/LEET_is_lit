class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> dup=nums;
        vector<int> res;
        int f=-1,mid,low,high,i;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i++)
        {
            low=0,high=nums.size()-1;
            while(low<=high)
            {
                mid=low+(high-low)/2;
                 if(nums[i]+nums[mid]==target && i!=mid)
                 {
                     f=i;
                    for(i=0;i<nums.size();i++)
                    {
                        if(dup[i]==nums[f] || dup[i]==nums[mid])
                            res.push_back(i);
                        if(res.size()==2)
                            return res;
                    }
                 }
                else if(nums[i]+nums[mid]>target)
                    high=mid-1;
                else
                    low=mid+1;
            }
        }      
        return {};
    }
};