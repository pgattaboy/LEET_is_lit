class Solution {
public:
    bool isHappy(int n) {
        while(n>9){
            int digit,sum=0;
            while(n){
                digit=n%10;
                n=n/10;
                sum+=(digit*digit);
            }
            n=sum;
        }
        return n==1 || n==7 ;
    }
};