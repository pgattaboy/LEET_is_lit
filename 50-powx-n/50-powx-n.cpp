class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        else if(n>0){
             double ans=myPow(x,n/2);
            if(n%2==0){
                return ans*ans;
            }
            else{
                 return ans*ans*x;
            }
        }
        else{
            n++;
            double ans=myPow(x,0-n);
            return 1/(ans*x);
        }
    }
};