class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        if(nums[mid]<target)
            return mid+1;
        else{
            if(mid)
                return mid;
            else return 0;
        }
        
    }
};