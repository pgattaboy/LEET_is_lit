class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        int a[2];
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                c++;
                if(c==1){
                    a[c-1]=i;
                }
                else if(c==2){
                    a[c-1]=i;
                }
                else{
                    return false;
                }
            }
        }
        if(c==0)
                return true;
            else if(c==2 && s1[a[1]]==s2[a[0]] && s1[a[0]]==s2[a[1]])
                return true;
            return false;
    }
};