class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int i,n=s.size();
        for(i=0;i<n;i++){
            while(i!=indices[i]){
                swap(s[i],s[indices[i]]);
                swap(indices[i],indices[indices[i]]);
            }
        }
        return s;
    }
};