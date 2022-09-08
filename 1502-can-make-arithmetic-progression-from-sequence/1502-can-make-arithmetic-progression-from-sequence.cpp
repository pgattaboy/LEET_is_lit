class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        for(int i=0,diff;i<arr.size()-1;i++){
            if(i==0)
                diff=arr[i+1]-arr[i];
            else{
                if(diff!=arr[i+1]-arr[i])
                    return false;
            }
        }
        return true;
    }
};