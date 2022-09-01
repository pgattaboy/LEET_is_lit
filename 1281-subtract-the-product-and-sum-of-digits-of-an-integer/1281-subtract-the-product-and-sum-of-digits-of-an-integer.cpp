class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1,m;
        while(n){
            m=n%10;
            n/=10;
            sum+=m;
            pro*=m;
        }
        return pro-sum;
    }
};