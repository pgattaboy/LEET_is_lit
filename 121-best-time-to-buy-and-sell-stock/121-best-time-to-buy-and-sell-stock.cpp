class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini,maxa;
        mini=prices[0];
        maxa=0;
        for(int i=1;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxa=max(maxa,prices[i]-mini);
        }
        return maxa;
    }
};