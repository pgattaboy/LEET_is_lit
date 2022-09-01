class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0,i,n=t.size();
        for(i=0;i<n;i++){
            if(t[i]==s[j])
                j++;
        }
        if(j==s.size())
            return true;
        return false;
    }
};