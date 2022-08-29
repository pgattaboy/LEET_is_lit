class Solution {
public:
    int balancedStringSplit(string s) {
        int c=0,i,n=s.length(),l=0,r=0;
        for(i=0;i<n;i++){
            if(s[i]=='L')
                l++;
            else
                r++;
            if(l==r){
                c++;
                l=0,r=0;
            }
        }
        return c;
    }
};