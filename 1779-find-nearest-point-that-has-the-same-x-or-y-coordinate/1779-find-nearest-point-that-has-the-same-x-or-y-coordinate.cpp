class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mini=-1,i,p=-1;
        for(i=0;i<points.size();i++){
            if(x==points[i][0] || y==points[i][1]){
             if(mini>abs(x-points[i][0])+abs(y-points[i][1]) || mini==-1){
                 p=i;
                 mini=abs(x-points[i][0])+abs(y-points[i][1]);
             }
            }
        }
        return p;
    }
};