class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,mini,maxa;
        mini=prices[0];
        maxa=0;
        for(i=1;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxa=max(maxa,prices[i]-mini);
        }
        return maxa;
    }
};