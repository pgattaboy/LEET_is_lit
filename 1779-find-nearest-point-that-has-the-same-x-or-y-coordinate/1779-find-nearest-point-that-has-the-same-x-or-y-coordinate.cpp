class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mini=INT_MAX,i,n=points.size(),m,p=-1;
        for(i=0;i<n;i++){
            if(x==points[i][0] || y==points[i][1]){
             m=abs(x-points[i][0])+abs(y-points[i][1]);
             if(mini>m){
                 p=i;
                 mini=m;
             }
            }
        }
        return p;
    }
};