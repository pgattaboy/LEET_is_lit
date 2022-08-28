class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i,n=s.size();
        char str[n];
        for(i=0;i<n;i++){
            str[indices[i]]=s[i];
            //cout<<s[indices[i]];
        }
        string ss;
        for(i=0;i<n;i++)
            ss+=str[i];
        return ss;
    }
};