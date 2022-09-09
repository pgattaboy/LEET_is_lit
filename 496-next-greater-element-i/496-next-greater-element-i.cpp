class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int i,j;
        vector<int>n_greater(nums1.size());
        for(i=0;i<nums1.size();i++){
            for(j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    n_greater[i]=j;
                    break;
                }
            }
        }
        for(i=0;i<nums1.size();i++){
            j=n_greater[i]+1;
            n_greater[i]=-1;
            for(;j<nums2.size();j++){
                if(nums1[i]<nums2[j]){
                    n_greater[i]=nums2[j];
                    break;
                }
            }
        }
        return n_greater;
    }
};