class Solution {
public:
    string reverseWords(string s) {
        int i,k=0;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                reverse(s.begin()+k,s.begin()+i);
                k=i+1;
            }
        }
            reverse(s.begin()+k,s.begin()+i);
        return s;
    }
};