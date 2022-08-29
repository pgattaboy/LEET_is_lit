class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        int i;
        vector<int>r(n+1);
        r[0]=first;
        for(i=1;i<=n;i++){
            r[i]=(r[i-1]|encoded[i-1])-(r[i-1]&encoded[i-1]);
        }
        return r;
    }
};