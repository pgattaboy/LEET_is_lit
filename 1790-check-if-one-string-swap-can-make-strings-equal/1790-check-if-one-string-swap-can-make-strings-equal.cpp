class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int i,x,y,c=0;
        for(i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                c++;
                if(c==1){
                    x=i;
                }
                else if(c==2){
                    y=i;
                }
                else{
                    return false;
                }
            }
        }
        if(c==0)
                return true;
            else if(c==2 && s1[y]==s2[x] && s1[x]==s2[y])
                return true;
            return false;
    }
};