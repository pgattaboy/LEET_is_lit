class Solution {
public:
    int countOdds(int low, int high) {
        int ans1=high/2,ans2;
        if(high%2)
            ans1+=1;
        if(low%2)
            ans2=(low+1)/2-1;
        else
            ans2=low/2;
        return ans1-ans2;
    }
};