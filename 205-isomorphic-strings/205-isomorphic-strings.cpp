class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int s_arr[256]={0},t_arr[256]={0};
        int i,n=s.size(),m=t.size();
        if(n!=m)
            return false;
        for(i=0;i<n;i++){
            if(s_arr[s[i]]==0 && t_arr[t[i]]==0){
                {
                    s_arr[s[i]] = t[i]+1;
                    t_arr[t[i]] = 1;
                }
            }
            else if(s_arr[s[i]]==t[i]+1)
                continue;
            else
                return false;
        }
        return true;
    }
};