class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0,i,n=salary.size(),mini=1000001,maxa=0;
        for(i=0;i<n;i++){
            sum+=salary[i];
            mini=min(mini,salary[i]);
            maxa=max(maxa,salary[i]);
        }
        return (double)(sum-maxa-mini)/ (double) (n-2) ;
    }
};