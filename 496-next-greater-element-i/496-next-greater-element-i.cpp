class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        for(int i=0;i<nums1.size();i++){
            int j=mp[nums1[i]]+1;
          mp[nums1[i]]=-1;
            for(;j<nums2.size();j++){
                if(nums1[i]<nums2[j]){
                   mp[nums1[i]]=nums2[j];
                    break;
                }
            }
            nums1[i]=mp[nums1[i]];
        }
        return nums1;
    }
};