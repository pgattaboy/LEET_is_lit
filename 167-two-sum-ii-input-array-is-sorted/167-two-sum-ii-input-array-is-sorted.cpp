class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,l,h,mid,n = numbers.size();
        for(int i=0;i<n-1;i++){
             l = i+1;
             h = n;
            while(l<h){
                mid =l+(h-l)/2;
                if(numbers[mid]+numbers[i]==target) 
                    return {i+1,mid+1};
                else if(numbers[mid]+numbers[i]>target)
                    h=mid;
                else
                    l=mid+1;
            }
            if(l!=numbers.size() && numbers[l]==target-numbers[i])
                return {i+1,l+1};
        }
        return {}; // not found
    }
};