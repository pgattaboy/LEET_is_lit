class Solution {
public:
    int longestPalindrome(string s) {
        int up[26]={0};
        int low[26]={0};
        int i,c=0,ans=0;
        for(i=0;i<s.size();i++){
            if(s[i]>='a')
                low[s[i]-'a']++;
            else
                up[s[i]-'A']++;
        }
        for(i=0;i<26;i++){
            ans=ans+up[i]+low[i];
            if(up[i]%2)
                c++;
            if(low[i]%2)
                c++;
        }
        if(c!=0)
        ans=ans-c+1;
        return ans;
    }
};